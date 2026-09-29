#include "Motor.h"
#include <Arduino.h>

#define MR_IN1 12 //backright motor
#define MR_IN2 13 //backright motor
#define MR_IN3 32 //frontright motor
#define MR_IN4 33 //frontright motor

#define ML_IN1 27 //frontleft motor
#define ML_IN2 14 //frontleft motor
#define ML_IN3 25 //backleft motor
#define ML_IN4 26 //backleft motor

#define BR_ENA 15  //Pin speed backright motor
#define FR_ENB 2   //Pin speed frontright motor
#define BL_ENB 4   //Pin speed backleft motor
#define FL_ENA 19  //Pin speed frontleft motor

#define L_LED 16  // Left LED
#define R_LED 17  // Right LED

int BR_Speed;
int FR_Speed;
int BL_Speed;
int FL_Speed;

void Motor::ledBlink(int delayTime)
{
    digitalWrite(R_LED, LOW);
    digitalWrite(L_LED, LOW);
    delay(delayTime);
    digitalWrite(R_LED, HIGH);
    digitalWrite(L_LED, HIGH);
    delay(delayTime);
}

void Motor::motorInit() {

  pinMode(L_LED, OUTPUT);
  pinMode(R_LED, OUTPUT);
  pinMode(MR_IN1, OUTPUT);
  pinMode(MR_IN2, OUTPUT);
  pinMode(MR_IN3, OUTPUT);
  pinMode(MR_IN4, OUTPUT);
  pinMode(ML_IN1, OUTPUT);
  pinMode(ML_IN2, OUTPUT);
  pinMode(ML_IN3, OUTPUT);
  pinMode(ML_IN4, OUTPUT);
  pinMode(BR_ENA, OUTPUT);
  pinMode(FR_ENB, OUTPUT);
  pinMode(BL_ENB, OUTPUT);
  pinMode(FL_ENA, OUTPUT);
  stop();
}

void Motor::adjectMotorSpeed(int RA, int RB, int LB, int LA) {
  BR_Speed = RA;
  FR_Speed = RB;
  BL_Speed = LB;
  FL_Speed = LA;
}

void Motor::forward() {
  digitalWrite(R_LED, HIGH);
  digitalWrite(L_LED, HIGH);
  analogWrite(BR_ENA, BR_Speed);   //backright motor
  analogWrite(FR_ENB, FR_Speed);   //frontright motor
  analogWrite(BL_ENB, BL_Speed);   //backleft motor
  analogWrite(FL_ENA, FL_Speed);   //frontleft motor

  digitalWrite(MR_IN1, HIGH);
  digitalWrite(MR_IN2, LOW);
  digitalWrite(MR_IN3, HIGH);
  digitalWrite(MR_IN4, LOW);
  digitalWrite(ML_IN1, HIGH);
  digitalWrite(ML_IN2, LOW);
  digitalWrite(ML_IN3, HIGH);
  digitalWrite(ML_IN4, LOW);
}

void Motor::backward() {
  analogWrite(BR_ENA, BR_Speed);   //backright motor
  analogWrite(FR_ENB, FR_Speed);   //frontright motor
  analogWrite(BL_ENB, BL_Speed);   //backleft motor
  analogWrite(FL_ENA, FL_Speed);   //frontleft motor

  digitalWrite(MR_IN1, LOW);
  digitalWrite(MR_IN2, HIGH);
  digitalWrite(MR_IN3, LOW);
  digitalWrite(MR_IN4, HIGH);
  digitalWrite(ML_IN1, LOW);
  digitalWrite(ML_IN2, HIGH);
  digitalWrite(ML_IN3, LOW);
  digitalWrite(ML_IN4, HIGH);
}

void Motor::slide_left() {
  analogWrite(BR_ENA, BR_Speed);   //backright motor
  analogWrite(FR_ENB, FR_Speed);   //frontright motor
  analogWrite(BL_ENB, BL_Speed);   //backleft motor
  analogWrite(FL_ENA, FL_Speed);   //frontleft motor

  digitalWrite(MR_IN1, LOW);
  digitalWrite(MR_IN2, HIGH);
  digitalWrite(MR_IN3, HIGH);
  digitalWrite(MR_IN4, LOW);
  digitalWrite(ML_IN1, LOW);
  digitalWrite(ML_IN2, HIGH);
  digitalWrite(ML_IN3, HIGH);
  digitalWrite(ML_IN4, LOW);
}

void Motor::slide_right() {
  analogWrite(BR_ENA, BR_Speed);   //backright motor
  analogWrite(FR_ENB, FR_Speed);   //frontright motor
  analogWrite(BL_ENB, BL_Speed);   //backleft motor
  analogWrite(FL_ENA, FL_Speed);   //frontleft motor

  digitalWrite(MR_IN1, HIGH);
  digitalWrite(MR_IN2, LOW);
  digitalWrite(MR_IN3, LOW);
  digitalWrite(MR_IN4, HIGH);
  digitalWrite(ML_IN1, HIGH);
  digitalWrite(ML_IN2, LOW);
  digitalWrite(ML_IN3, LOW);
  digitalWrite(ML_IN4, HIGH);
}

void Motor::slide_left_front() {
  analogWrite(BR_ENA, BR_Speed);   //backright motor
  analogWrite(FR_ENB, FR_Speed);   //frontright motor
  analogWrite(BL_ENB, BL_Speed);   //backleft motor
  analogWrite(FL_ENA, FL_Speed);   //frontleft motor

  digitalWrite(MR_IN1, LOW);
  digitalWrite(MR_IN2, LOW);
  digitalWrite(MR_IN3, HIGH);
  digitalWrite(MR_IN4, LOW);
  digitalWrite(ML_IN1, LOW);
  digitalWrite(ML_IN2, LOW);
  digitalWrite(ML_IN3, HIGH);
  digitalWrite(ML_IN4, LOW);
}

void Motor::slide_right_front() {
  analogWrite(BR_ENA, BR_Speed);   //backright motor
  analogWrite(FR_ENB, FR_Speed);   //frontright motor
  analogWrite(BL_ENB, BL_Speed);   //backleft motor
  analogWrite(FL_ENA, FL_Speed);   //frontleft motor

  digitalWrite(MR_IN1, HIGH);
  digitalWrite(MR_IN2, LOW);
  digitalWrite(MR_IN3, LOW);
  digitalWrite(MR_IN4, LOW);
  digitalWrite(ML_IN1, HIGH);
  digitalWrite(ML_IN2, LOW);
  digitalWrite(ML_IN3, LOW);
  digitalWrite(ML_IN4, LOW);
}

void Motor::slide_left_back() {
  analogWrite(BR_ENA, BR_Speed);   //backright motor
  analogWrite(FR_ENB, FR_Speed);   //frontright motor
  analogWrite(BL_ENB, BL_Speed);   //backleft motor
  analogWrite(FL_ENA, FL_Speed);   //frontleft motor

  digitalWrite(MR_IN1, LOW);
  digitalWrite(MR_IN2, HIGH);
  digitalWrite(MR_IN3, LOW);
  digitalWrite(MR_IN4, LOW);
  digitalWrite(ML_IN1, LOW);
  digitalWrite(ML_IN2, HIGH);
  digitalWrite(ML_IN3, LOW);
  digitalWrite(ML_IN4, LOW);
}

void Motor::slide_right_back() {
  analogWrite(BR_ENA, BR_Speed);   //backright motor
  analogWrite(FR_ENB, FR_Speed);   //frontright motor
  analogWrite(BL_ENB, BL_Speed);   //backleft motor
  analogWrite(FL_ENA, FL_Speed);   //frontleft motor

  digitalWrite(MR_IN1, LOW);
  digitalWrite(MR_IN2, LOW);
  digitalWrite(MR_IN3, LOW);
  digitalWrite(MR_IN4, HIGH);
  digitalWrite(ML_IN1, LOW);
  digitalWrite(ML_IN2, LOW);
  digitalWrite(ML_IN3, LOW);
  digitalWrite(ML_IN4, HIGH);
}

void Motor::turn_left() {
  digitalWrite(L_LED, HIGH);
  digitalWrite(R_LED, LOW);
  analogWrite(BR_ENA, BR_Speed);   //backright motor
  analogWrite(FR_ENB, FR_Speed);   //frontright motor
  analogWrite(BL_ENB, BL_Speed);   //backleft motor
  analogWrite(FL_ENA, FL_Speed);   //frontleft motor

  digitalWrite(MR_IN1, HIGH);
  digitalWrite(MR_IN2, LOW);
  digitalWrite(MR_IN3, HIGH);
  digitalWrite(MR_IN4, LOW);
  digitalWrite(ML_IN1, LOW);
  digitalWrite(ML_IN2, HIGH);
  digitalWrite(ML_IN3, LOW);
  digitalWrite(ML_IN4, HIGH);
}

void Motor::turn_right() {
  digitalWrite(R_LED, HIGH);
  digitalWrite(L_LED, LOW);
  analogWrite(BR_ENA, BR_Speed);   //backright motor
  analogWrite(FR_ENB, FR_Speed);   //frontright motor
  analogWrite(BL_ENB, BL_Speed);   //backleft motor
  analogWrite(FL_ENA, FL_Speed);   //frontleft motor

  digitalWrite(MR_IN1, LOW);
  digitalWrite(MR_IN2, HIGH);
  digitalWrite(MR_IN3, LOW);
  digitalWrite(MR_IN4, HIGH);
  digitalWrite(ML_IN1, HIGH);
  digitalWrite(ML_IN2, LOW);
  digitalWrite(ML_IN3, HIGH);
  digitalWrite(ML_IN4, LOW);
}

void Motor::stop() {
  digitalWrite(R_LED, LOW);
  digitalWrite(L_LED, LOW);
  analogWrite(BR_ENA, BR_Speed);   //backright motor
  analogWrite(FR_ENB, FR_Speed);   //frontright motor
  analogWrite(BL_ENB, BL_Speed);   //backleft motor
  analogWrite(FL_ENA, FL_Speed);   //frontleft motor

  digitalWrite(MR_IN1, LOW);
  digitalWrite(MR_IN2, LOW);
  digitalWrite(MR_IN3, LOW);
  digitalWrite(MR_IN4, LOW);
  digitalWrite(ML_IN1, LOW);
  digitalWrite(ML_IN2, LOW);
  digitalWrite(ML_IN3, LOW);
  digitalWrite(ML_IN4, LOW);
}
