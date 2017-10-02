/**
 * @file    AnalogSensor.cpp
 * @author  nrparikh
 * @copyright GNU public license
 *
 * @brief Implementation for class AnalogSensor
 *
 */

#include <AnalogSensor.hpp>
#include <memory>
#include <numeric>
#include <vector>

AnalogSensor::AnalogSensor(unsigned int samples) : mSamples(samples) {
}

AnalogSensor::~AnalogSensor() {
}

int AnalogSensor::Read() {
  // std::vector<int> *readings = new std::vector<int>(mSamples, 10);

  std::unique_ptr<std::vector<int> > readings =
      std::make_unique<std::vector<int> >(mSamples, 10);
  double result = std::accumulate(readings->begin(), readings->end(), 0.0) /
                  readings->size();
  return result;
}
