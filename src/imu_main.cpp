#include "imu.h"
#include "ros/ros.h"
#include "sensor_msgs/Imu.h"
#include <cmath>
int main(int argc, char** argv){
	ros::init(argc,argv,"IMU_NODE");
	ros::NodeHandle nh;
	ros::Publisher pub = nh.advertise<sensor_msgs::Imu>("/life/imu",1);
	IMU my_ahrs(nh,"/dev/IMU");
	ROS_INFO("SETTING IMU...");
	if(!my_ahrs.initialize())
		handle_error("Can't initialize imu");
	ROS_INFO("START NODE");
	while(ros::ok()){
		
	}
	return 0;
}
