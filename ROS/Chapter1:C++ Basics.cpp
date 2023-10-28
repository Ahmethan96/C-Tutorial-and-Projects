1 - cd ~/catkin_ws/src/
2 - git clone https://bitbucket.org/theconstructcore/cpp_course_repo.git
3 - cd ~/catkin_ws/src/cpp_course_repo/utilities/
4 - touch name.cpp
5 - #include <iostream>

    int main() {
        printf("Hello, ROS developer!   \n");
        
        return 0;}
6 - g++ -std=c++11 name.cpp -o name_compiled
7 - ./name_compiled
8 - #include "rosbot_control/rosbot_class.h"
    #include <ros/ros.h>
    
    int main(int argc, char **argv) {
      ros::init(argc, argv, "rosbot_node");
    
      RosbotClass rosbot;
      rosbot.move();
    
      float coordinate = rosbot.get_position(1);
    
      ROS_INFO_STREAM(coordinate);
    
      return 0;
    }  

