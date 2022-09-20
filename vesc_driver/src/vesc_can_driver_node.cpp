/* 
 * vesc_can_driver_node.cpp
 * 
 * Created on: Sep 20, 2022 12:54
 * Description: 
 * 
 * Copyright (c) 2022 Ruixiang Du (rdu)
 */ 

#include "rclcpp/rclcpp.hpp"

#include "vesc_driver/vesc_can_driver.hpp"

using namespace vesc_driver;

int main(int argc, char * argv[]) {
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<VescCanDriver>());
  rclcpp::shutdown();
  return 0;
}