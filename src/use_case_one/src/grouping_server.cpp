#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "use_case_one/srv/grouping.hpp"


void grouping(const std::shared_ptr<use_case_one::srv::Grouping::Request> request,
         std::shared_ptr<use_case_one::srv::Grouping::Response>  response)
{

    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Incoming request\nplatform id : %d",
                request->platform_id);


    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "sending back response: [%ld]", (long int)response->reply_type);

    response->group_idx = 1;
    response->is_leader = true;
    response->platform_id = request->platform_id;
    response->reply_type = 0;
}

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);

    std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("grouping_server");

    rclcpp::Service<use_case_one::srv::Grouping>::SharedPtr service =
            node->create_service<use_case_one::srv::Grouping>("Grouping", &grouping);

    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Ready to send grouping response.");

    rclcpp::spin(node);
    rclcpp::shutdown();
}