#include <ros/ros.h>
//#include <kinect_bbox_srv/Bbox.h>
#include <kinect_bbox_srv/bbox.h>

//#include <kinect_bbox_srv/bboxRequest.h>
//#include <kinect_bbox_srv/bboxResponse.h>

bool get_bbox(kinect_bbox_srv::bbox::Request &req,
                 kinect_bbox_srv::bbox::Response &resp) {
   return true;
}

int main(int argc, char **argv) {
    ros::init(argc, argv, "bbox_server");
    ros::NodeHandle nh;

    ros::ServiceServer service = nh.advertiseService("get_bbox", get_bbox);
    ROS_INFO("bbox service is ready...");
    ros::spin();

    return 0;
}
