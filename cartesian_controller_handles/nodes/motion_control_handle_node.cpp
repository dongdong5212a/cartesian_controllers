// -- BEGIN LICENSE BLOCK -----------------------------------------------------
// -- END LICENSE BLOCK -------------------------------------------------------

//-----------------------------------------------------------------------------
/*!\file    motion_control_handle_node.cpp
 *
 * \author  Stefan Scherzinger <scherzin@fzi.de>
 * \date    2017/11/06
 *
 */
//-----------------------------------------------------------------------------

#include <cartesian_controller_handles/MotionControlHandle.h>
#include <ros/ros.h>

int main(int argc, char** argv)
{
  ros::init(argc, argv, "motion_control_handle_node");
  ros::NodeHandle nh;

  // Enable grafical motion control in RViz
  cartesian_controller_handles::MotionControlHandle motion_handle;

  ros::spin();

  return 0;
}