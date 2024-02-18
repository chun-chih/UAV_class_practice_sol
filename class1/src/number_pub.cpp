
#include "ros/ros.h"
#include "std_msgs/Int32.h"

using namespace std;
// Create a message object
std_msgs::Int32 msg;


int main(int argc, char **argv)
{
  cout << "initialize publish number" << endl;

  // you should rename your node and topic to avoid confliction
  // Initialize the ROS node
  ros::init(argc, argv, "number_pub");
  // Create a node handle
  ros::NodeHandle n;
 // Create a publisher that publishes integers to the "number_1" topic
  ros::Publisher chatter_pub1 = n.advertise<std_msgs::Int32>("/number_1", 1000);
  ros::Rate loop_rate(10);


  while (ros::ok())
  {
    
    // Publish number data here
    msg.data = 1;
    chatter_pub1.publish(msg);





  }


  return 0;
}
