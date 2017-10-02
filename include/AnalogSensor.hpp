/**
 * @file    AnalogSensor.hpp
 * @author  nrparikh
 * @copyright GNU public license
 *
 * @brief Header file for the class AnalogSensor
 *
 */

#pragma once

#include <iostream>

class AnalogSensor {
 public:
  explicit AnalogSensor(unsigned int samples);
  ~AnalogSensor();
  int Read();

 private:
  unsigned int mSamples;
};
