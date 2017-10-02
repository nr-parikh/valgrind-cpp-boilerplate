/**
 * @file    main.cpp
 * @author  nrparikh
 * @copyright GNU public license
 *
 * @brief Main file to test the implementation of AnalogSensor
 *
 */

#include <AnalogSensor.hpp>
#include <iostream>

int main() {
  AnalogSensor lightSensor(5);
  std::cout << "Averaged sensor reading: " << lightSensor.Read() << std::endl;
  bool terminator = 1;
  if (terminator) {
    std::cout << "DONE" << std::endl;
  }
  return 0;
}
