# H2020 ESROCOS Project
# Company: GMV Aerospace & Defence S.A.U.
# Licence: GPLv2

esrocos_build_taste(vizkit3d_range_widgets
    SOURCES
    test_range
    vizkit3d_depthmap
    vizkit3d_laserscan
    vizkit3d_pointcloud
    vizkit3d_sonarbeam
    BINARIES
    work/binaries/x86_partition
    DEPENDS
    vizkit3d_types    
    vizkit3d_headers
)
