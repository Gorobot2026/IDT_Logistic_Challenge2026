#include "Auto.h"
#include "Motor.h"
#include "Sensors.h"


void Forward() {
  Motor::forward();
}

void Backward() {
  Motor::backward();
}

void Turn_Left() {
  Motor::turn_left();
}

void Turn_Right() {
  Motor::turn_right();
}

void Slide_left() {
  Motor::slide_left();
}

void Slide_right() {
  Motor::slide_right();
}

void Slide_left_front() {
  Motor::slide_left_front();
}

void Slide_right_front() {
  Motor::slide_right_front();
}

void Slide_left_back() {
  Motor::slide_left_back();
}

void Slide_right_back() {
  Motor::slide_right_back();
}

void Stop() {
  Motor::stop();
}

long getDistance() {
  return Sensors::ultraGetDistance();
}

