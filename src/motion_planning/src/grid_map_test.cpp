#include <ros/ros.h>
#include<grid_map_ros/grid_map_ros.hpp>
#include<grid_map_msgs/GridMap.h>
#include<cmath>

using namespace grid_map;

int main(int argc, char ** argv){

  ros::init(argc,argv,"grid_map_sample_demo");
  ros::NodeHandle n("~");
  ros::Publisher publisher = n.advertise<grid_map_msgs::GridMap>("grid_map",1,true);

  //create grid map
  GridMap map({"elevation"});
  map.setFrameId("map");
  map.setGeometry(Length(1.2,2.0), 0.03);
  ROS_INFO("Created map with size %f x %f m (%i x% i cells).",
           map.getLength().x(),map.getLength().y(),
           map.getSize()(0), map.getSize()(1));
  //Work with grid map in a loop
  ros::Rate rate(30.0);
  while(n.ok()){
    //add data to grid map
    ros::Time time= ros::Time::now();
    for(GridMapIterator it(map); !it.isPastEnd(); ++it){
      Position position;
      map.getPosition(*it, position);
//      map.at("elevation",*it) = -0.04+0.2*std::sin(3.0*time.toSec()+5.0 * position.y())*position.x();
      map.at("elevation",*it) = position.y()+position.x();

    }

    //publish grid map
    map.setTimestamp(time.toNSec());
    grid_map_msgs::GridMap message;
    GridMapRosConverter::toMessage(map,message);
    publisher.publish(message);

    rate.sleep();
  }
  return 0;


}


