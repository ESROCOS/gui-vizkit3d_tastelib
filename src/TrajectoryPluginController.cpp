/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#include "TrajectoryPluginController.hpp"
#include <fstream>

TrajectoryPluginController::TrajectoryPluginController(vizkit3d::Vizkit3DWidget& widget, YAML::Node& config)
: m_pPlugin(NULL)
{
    assert(config["type"] && !config["type"].as<std::string>().compare("TrajectoryVisualization"));
    
    // Plugin type and name
    setType("TrajectoryVisualization");
    setNameFromConfig(config);
    setLabel(getName() + " (" + getType() + ")");

    // Create and add plugin
    m_pPlugin = dynamic_cast<vizkit3d::TrajectoryVisualization*>(
            widget.loadPlugin("base", "TrajectoryVisualization"));
    if (NULL == m_pPlugin)
    {
        throw std::runtime_error("loading plugin TrajectoryVisualization from base failed");
    }

    // Apply configuration

    std::string strVal;
    int intVal;
    double doubleVal;
    QColor colorVal;

    for(auto it = config.begin(); it != config.end(); it++) 
    {
        std::string key = it->first.as<std::string>();
        
        if (!key.compare("MaxPoints"))
        {
            if (getIntParam(intVal, config, key, getLabel()))
            {
                m_pPlugin->setMaxNumberOfPoints(intVal);
            }
        }
        else if (!key.compare("LineWidth"))
        {
            if (getDoubleParam(doubleVal, config, key, getLabel()))
            {
                m_pPlugin->setLineWidth(doubleVal);
            }
        }
        else if (!key.compare("Color"))
        {
            if (getColorParam(colorVal, config, key, getLabel()))
            {
                m_pPlugin->setColor(colorVal);
            }
        }
        else if (!key.compare("frame"))
        {
            QString frameName = QString::fromStdString(getName());
            QString baseFrame;
            QVector3D position;
            QQuaternion rotation;

            auto frameConfig = config["frame"];
            if (getFrameParam(frameName, baseFrame, position, rotation, frameConfig, getLabel()))
            {
                widget.setTransformation(baseFrame, frameName, position, rotation);
                widget.setPluginDataFrame(frameName, m_pPlugin);
            }
        }
        else if (key.compare("name") && key.compare("type")) // ignore, processed earlier
        {
            printUnknownParamMsg(key, getLabel());
        }
    }
}


TrajectoryPluginController::~TrajectoryPluginController()
{
}

void TrajectoryPluginController::updateTrajectory(const base::Vector3d& vector)
{
    assert(NULL != m_pPlugin);
    m_pPlugin->updateTrajectory(vector);
}

void TrajectoryPluginController::updateSpline(const base::geometry::Spline<3>& spline)
{
    assert(NULL != m_pPlugin);
    m_pPlugin->updateSpline(spline);
}
