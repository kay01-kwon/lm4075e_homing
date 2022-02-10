cmake_minimum_required(VERSION 2.8.11)
project(lm4075e_homing)

find_library(WIRINGPI_LIBRARIES NAMES wiringPi)

add_executable(lm4075e_homing src/lm4075e_homing.cpp)
target_link_libraries(lm4075e_homing ${WIRINGPI_LIBRARIES})
