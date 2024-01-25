
#include <chrono>
#include <memory>
#include <random>

#include "rclcpp/rclcpp.hpp"
#include "use_case_one/srv/grouping.hpp"

using namespace std::chrono_literals;

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);

  std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("grouping_client");
  rclcpp::Client<use_case_one::srv::Grouping>::SharedPtr client =
    node->create_client<use_case_one::srv::Grouping>("Grouping");

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(0, 1000);
    const int platform_id = dis(gen);

    std::cout << "=============== PLATFORM Id : " << platform_id << "==============================" << std::endl;


  auto request = std::make_shared<use_case_one::srv::Grouping::Request>();
  request->platform_id = platform_id;
  request->is_leader = false;
  request->request_type = 0;
  request->group_idx = -1;


  while (!client->wait_for_service(1s)) {
    if (!rclcpp::ok()) {
      RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupted while waiting for the service. Exiting.");
      return 0;
    }
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "service not available, waiting again...");
  }

  auto result = client->async_send_request(request);
  // Wait for the result.
  if (rclcpp::spin_until_future_complete(node, result) ==
    rclcpp::FutureReturnCode::SUCCESS)
  {
      auto response = result.get();
      const int result_type = response->reply_type;
      const int platform_id = response->platform_id;
      const bool is_leader = response->is_leader;
      const int group_idx = response->group_idx;

      if(result_type == 0) {
          RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "ASSIGN : group id  %d", group_idx);
          if(is_leader) {
              RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "ASSIGN : PLATFORM ID :   %d", platform_id);
              RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "ASSIGN : Platform %d Is Leader ", platform_id);
          } else {
              RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "ASSIGN : Platform %d Is Follower ", platform_id);
          }
      } else if(result_type == 1) {
          RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "MOVE : group id  %d", group_idx);

          if(is_leader) {
              RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "MOVE : PLATFORM ID :   %d", platform_id);
              RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "MOVE : Platform %d Is Leader ", platform_id);
          } else {
              RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "MOVE : Platform %d Is Follower ", platform_id);
          }

      } else if(result_type == 2) {
          RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "ALREADY REGISTERED : group id  %d", group_idx);

          if(is_leader) {
              RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "ALREADY REGISTERED : PLATFORM ID :   %d", platform_id);
              RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "ALREADY REGISTERED : Platform %d Is Leader ", platform_id);
          } else {
              RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "ALREADY REGISTERED : Platform %d Is Follower ", platform_id);
          }


      } else if(result_type == 3) {
          RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "NOT REGISTERED NEWLY ASSIGN : group id  %d", group_idx);

          if(is_leader) {
              RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "NOT REGISTERED NEWLY ASSIGN : PLATFORM ID :   %d", platform_id);
              RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "NOT REGISTERED NEWLY ASSIGN : Platform %d Is Leader ", platform_id);
          } else {
              RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "NOT REGISTERED NEWLY ASSIGN : Platform %d Is Follower ", platform_id);
          }

      } else {
          assert(false);
      }

//    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Sum: %d", result.get()->reply_type);
  } else {
//    RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Failed to call service add_two_ints");
  }

  rclcpp::shutdown();
  return 0;
}