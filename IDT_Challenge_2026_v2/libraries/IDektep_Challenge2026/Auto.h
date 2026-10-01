#ifndef AUTO_H
#define AUTO_H

#include <Arduino.h>

// ========================================
// คำสั่งสำหรับนักเรียน
// ใส่เฉพาะความเร็วเป็นเปอร์เซ็นต์
// เวลาให้ใช้ delay() แยกต่างหาก
// ========================================

void Forward();
void Backward();

void Turn_Left();
void Turn_Right();

void Slide_left();
void Slide_right();

void Slide_left_front();
void Slide_right_front();

void Slide_left_back();
void Slide_right_back();

void Stop();

// อ่านค่าระยะจาก Ultrasonic
long getDistance();

// ฟังก์ชันหลักสำหรับรันโหมด Auto
void runAutoMode();

#endif
