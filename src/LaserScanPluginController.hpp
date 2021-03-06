/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#ifndef LASERSCANPLUGINCONTROLLER_HPP
#define LASERSCANPLUGINCONTROLLER_HPP

#include "PluginController.hpp"
#include <vizkit3d/Vizkit3DWidget.hpp>
#include <vizkit3d/LaserScanVisualization.hpp>
#include "yaml-cpp/yaml.h"

// Contains a LaserScanVisualization plugin for use from TASTE
class LaserScanPluginController: public PluginController
{
public:
    // Constructor: may throw runtime-error exception
    LaserScanPluginController(vizkit3d::Vizkit3DWidget& widget, YAML::Node& config);
    virtual ~LaserScanPluginController();
    
    // Update functions
    void updateLaserScan(const base::samples::LaserScan& scan);
    void updatePose(const base::samples::RigidBodyState& state);

    void updateData(const base::samples::LaserScan& scan) { updateLaserScan(scan); }
    void updateData(const base::samples::RigidBodyState& state) { updatePose(state); }

private:
    // Vizkit plugin
    vizkit3d::LaserScanVisualization* m_pPlugin;
};

#endif //LASERSCANPLUGINCONTROLLER_HPP
