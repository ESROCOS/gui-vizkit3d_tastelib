
/* Header file for function vizkit3d_MotionCommand in CPP language
 * Generated by TASTE on 2021-06-09 12:19:50
 * Context Parameters present : YES
 * Provided interfaces : updateMotionCommand, updatePose
 * Required interfaces : 
 * User-defined properties for this function:
  *  |_ Taste::Active_Interfaces = enabled
  *  |_ Taste::coordinates = 878 501 1177 650
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

void vizkit3d_motioncommand_startup(void);

/* Provided interfaces */
void vizkit3d_motioncommand_PI_updateMotionCommand( const asn1SccBase_commands_Motion2D * );
void vizkit3d_motioncommand_PI_updatePose( const asn1SccBase_Pose * );

/* Required interfaces */



#ifdef __cplusplus
}
#endif
