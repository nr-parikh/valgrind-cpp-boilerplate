/**
 * @file    main.cpp
 * @author  nrparikh
 * @copyright GNU public license
 *
 * @brief Main file to for gtest
 *
 */


#include <gtest/gtest.h>

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
