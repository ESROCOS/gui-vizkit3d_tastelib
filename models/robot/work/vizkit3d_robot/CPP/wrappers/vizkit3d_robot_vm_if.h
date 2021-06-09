/* Header file for function vizkit3d_Robot in CPP language
 * Generated by TASTE on 2021-06-09 11:02:39
 * Context Parameters present : YES
 * Provided interfaces : updateJoints, updateRigidBodyState
 * Required interfaces : 
 * User-defined properties for this function:
  *  |_ Taste::Active_Interfaces = enabled
  *  |_ Taste::coordinates = 1432 432 1783 647
 * DO NOT EDIT THIS FILE, IT WILL BE OVERWRITTEN DURING THE BUILD
 */

/* The purpose of this file is to provide a wrapper around the user code,
 * with a single interface that is independent of the implementation language
 * of the function. The parameters of each PI are blackboxes encoded
 * in the form specified in the interface view (Native, uPER, or ACN)
*/

#pragma once
#if defined(__unix__) || defined (__MSP430__)
   #include <stdlib.h>
   #include <stdio.h>
#else
   typedef unsigned size_t;
#endif

#ifdef __cplusplus
extern "C" {
#endif

#include "vizkit3d_robot.h"

// Function initialization - calls user startup code of all dependent functions
void init_vizkit3d_robot(void);


/* Provided interfaces */
void vizkit3d_robot_updateJoints
      (const char *IN_joints, size_t IN_joints_len);

void vizkit3d_robot_updateRigidBodyState
      (const char *IN_rbs, size_t IN_rbs_len);


#ifdef __cplusplus
}
#endif
