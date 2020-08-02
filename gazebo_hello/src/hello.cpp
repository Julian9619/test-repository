#include <gazebo/common/Plugin.hh>
#include <ros/ros.h>
namespace gazebo
{
    class WorldPluginHello : public WorldPlugin
    {
        public:  WorldPluginHello() : WorldPlugin()  
        {  

        }  
        void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf) 
        {    
            // Make sure the ROS node for Gazebo has already been initialized                                                                                        
            if (!ros::isInitialized())    
            {      
                ROS_ERROR("ROS not initialized");      
                return;    
            }    
            ROS_INFO("Hello World, there!");
        }
    };
    GZ_REGISTER_WORLD_PLUGIN(WorldPluginHello)
}
