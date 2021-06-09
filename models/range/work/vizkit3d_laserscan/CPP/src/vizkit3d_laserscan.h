
/* Header file for function vizkit3d_LaserScan in CPP language
 * Generated by TASTE on 2021-06-09 12:03:09
 * Context Parameters present : YES
 * Provided interfaces : updateLaserScan, updatePose
 * Required interfaces : 
 * User-defined properties for this function:
  *  |_ Taste::Active_Interfaces = enabled
  *  |_ Taste::coordinates = 1006 574 1396 733
 * DO NOT EDIT THIS FILE, IT WILL BE OVERWRITTEN DURING THE BUILD
 */

#pragma once

#include "dataview-uniq.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __unix__
   #include <stdlib.h>
   #include <stdio.h>
#endif

void vizkit3d_laserscan_startup(void);

/* Provided interfaces */
void vizkit3d_laserscan_PI_updateLaserScan( const asn1SccBase_samples_LaserScan * );
void vizkit3d_laserscan_PI_updatePose( const asn1SccBase_samples_RigidBodyState * );

/* Required interfaces */



#ifdef __cplusplus
}
#endif
