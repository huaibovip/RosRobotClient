#include <thread>
#include <algorithm>
#include <iostream>

#include <signal.h>
#include <stdlib.h>
#include <stdio.h>

#include <rosbridge_client_cpp/rosbridge.h>

void handler(int s)
{
   std::string m = "[SIGNAL] " + std::to_string(s);
   RBC_LOG_WARN("Received " << m);
   throw std::runtime_error(m);
}


int main()
{
    using namespace rosbridge_client_cpp;

    signal(SIGINT, handler);
    signal(SIGTERM, handler);

    RosbridgeClient rb("192.168.1.101", 9090,
        []{ std::cout << ">>>>>>>>>>>>>>>>>>> CONN" << std::endl; },
        []{ std::cout << ">>>>>>>>>>>>>>>>>>> DISC" << std::endl; }
    );

    try
    {
        // Publisher publisher(rb, "/test", "std_msgs/String", 10);
        // for (int i = 0; true; i++) {
        //     publisher.publish(keys_values_t({ {"data", "hello-"+std::to_string(i)} }));
        //     std::cout << i << std::endl;
        //     std::this_thread::sleep_for(std::chrono::milliseconds(250));
        // }

       // auto callback_srvs = [](const picojson::object& request) {
       //     picojson::object response;
       //     RBC_LOG_DEBUG("SERVICE " << std::to_string(request));
       //     response["success"] = picojson::value(true);
       //     response["message"] = picojson::value("hello-there-" + random_string(8));
       //     return response;
       // };
       
       auto callback_fast = [](const picojson::object& v) {
           // RBC_LOG_DEBUG("FAST " << std::to_string(v));
            std::cout << std::to_string(v) << std::endl;
       };
       // auto callback_slow = [](const picojson::object& v) {
       //     // RBC_LOG_INFO("SLOW " << std::to_string(v));
       //     std::cout << std::to_string(v) << std::endl;
       //     std::this_thread::sleep_for(std::chrono::milliseconds(750));
       // };

       {
           Subscriber subscriber_fast(rb, "/rosout", "rosgraph_msgs/Log", callback_fast, 10);
           // Subscriber subscriber_slot(rb, "/test", "std_msgs/String", callback_slow, 10);

           std::this_thread::sleep_for(std::chrono::seconds(2));

           // ServiceServer service_server(rb, "/callmemaybe", "std_srvs/Trigger", callback_srvs);

           // ServiceClient service_client(rb, "/rosbridge_websocket/get_loggers");

           // std::optional<picojson::object> response = service_client.call(picojson::object(), std::chrono::seconds(3));
           // if (response.has_value())
           //     RBC_LOG_DEBUG(std::to_string(response.value()));
           // else
           //     RBC_LOG_ERROR("TIMEOUT EXPIRED");

           // int i = 0;
        }
    }
    catch (std::exception& e)
    {
        RBC_LOG_ERROR("Exception " << e.what());
    }
}