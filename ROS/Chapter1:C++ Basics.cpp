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
  
