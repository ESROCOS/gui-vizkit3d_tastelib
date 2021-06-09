/* Body file for function vizkit3d_MotionCommand
 * Generated by TASTE on 2021-06-09 12:19:50
 * Provided interfaces : updateMotionCommand, updatePose
 * Required interfaces : 
 * User-defined properties for this function:
 *   |_ Taste::Active_Interfaces = enabled
 *   |_ Taste::coordinates = 878 501 1177 650
 * Timers              : 
 */
#include "vizkit3d_motioncommand_vm_if.h"
#include "C_ASN1_Types.h"
#ifdef __unix__
   #include <stdio.h>
#endif




unsigned vizkit3d_motioncommand_initialized = 0;
void init_vizkit3d_motioncommand(void)
{
   if (!vizkit3d_motioncommand_initialized) {
      vizkit3d_motioncommand_initialized = 1;
      // Call user code startup function
      vizkit3d_motioncommand_startup();
#ifdef __unix__
      puts ("[TASTE] Initialization completed for function vizkit3d_MotionCommand");
#endif
      vizkit3d_motioncommand_initialized = 2;
   }
}
void vizkit3d_motioncommand_updateMotionCommand
      (const char *IN_command, size_t IN_command_len)

{

   static asn1SccBase_commands_Motion2D IN_COMMAND;
#ifdef __unix__
   asn1SccBase_commands_Motion2D_Initialize(&IN_COMMAND);
#endif
   if (0 != Decode_NATIVE_Base_commands_Motion2D (&IN_COMMAND, (void *)IN_command, IN_command_len)) {
      #ifdef __unix__
         puts("Error decoding Base-commands-Motion2D in function vizkit3d_MotionCommand_updateMotionCommand");
      #endif
      return;
   }

   //  Declare user code function as external (it may not have a .h if it is in Ada)
   extern void vizkit3d_motioncommand_PI_updateMotionCommand
      (const asn1SccBase_commands_Motion2D *);




   // Call user code
   vizkit3d_motioncommand_PI_updateMotionCommand (&IN_COMMAND);

}
void vizkit3d_motioncommand_updatePose
      (const char *IN_pose, size_t IN_pose_len)

{

   static asn1SccBase_Pose IN_POSE;
#ifdef __unix__
   asn1SccBase_Pose_Initialize(&IN_POSE);
#endif
   if (0 != Decode_NATIVE_Base_Pose (&IN_POSE, (void *)IN_pose, IN_pose_len)) {
      #ifdef __unix__
         puts("Error decoding Base-Pose in function vizkit3d_MotionCommand_updatePose");
      #endif
      return;
   }

   //  Declare user code function as external (it may not have a .h if it is in Ada)
   extern void vizkit3d_motioncommand_PI_updatePose
      (const asn1SccBase_Pose *);




   // Call user code
   vizkit3d_motioncommand_PI_updatePose (&IN_POSE);

}
