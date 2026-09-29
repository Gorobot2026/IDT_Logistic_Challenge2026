void forward() {
  analogWrite(BR_ENA, 200);   
  analogWrite(FR_ENB, 200);   
  analogWrite(BL_ENB, 200);   
  analogWrite(FL_ENA, 200);  
  digitalWrite(MR_IN1, HIGH);
  digitalWrite(MR_IN2, LOW);
  digitalWrite(MR_IN3, HIGH);
  digitalWrite(MR_IN4, LOW);
  digitalWrite(ML_IN1, HIGH);
  digitalWrite(ML_IN2, LOW);
  digitalWrite(ML_IN3, HIGH);
  digitalWrite(ML_IN4, LOW);
}

void backward() {
  analogWrite(BR_ENA, 200);   
  analogWrite(FR_ENB, 200);   
  analogWrite(BL_ENB, 200);   
  analogWrite(FL_ENA, 200); 
  digitalWrite(MR_IN1, LOW);
  digitalWrite(MR_IN2, HIGH);
  digitalWrite(MR_IN3, LOW);
  digitalWrite(MR_IN4, HIGH);
  digitalWrite(ML_IN1, LOW);
  digitalWrite(ML_IN2, HIGH);
  digitalWrite(ML_IN3, LOW);
  digitalWrite(ML_IN4, HIGH);
}

void slide_left() {
  analogWrite(BR_ENA, 200);   
  analogWrite(FR_ENB, 200);   
  analogWrite(BL_ENB, 200);   
  analogWrite(FL_ENA, 200); 
  digitalWrite(MR_IN1, LOW);
  digitalWrite(MR_IN2, HIGH);
  digitalWrite(MR_IN3, HIGH);
  digitalWrite(MR_IN4, LOW);
  digitalWrite(ML_IN1, LOW);
  digitalWrite(ML_IN2, HIGH);
  digitalWrite(ML_IN3, HIGH);
  digitalWrite(ML_IN4, LOW);
}

void slide_right() {
  analogWrite(BR_ENA, 200);   
  analogWrite(FR_ENB, 200);   
  analogWrite(BL_ENB, 200);   
  analogWrite(FL_ENA, 200); 
  digitalWrite(MR_IN1, HIGH);
  digitalWrite(MR_IN2, LOW);
  digitalWrite(MR_IN3, LOW);
  digitalWrite(MR_IN4, HIGH);
  digitalWrite(ML_IN1, HIGH);
  digitalWrite(ML_IN2, LOW);
  digitalWrite(ML_IN3, LOW);
  digitalWrite(ML_IN4, HIGH);
}

void slide_left_front() {
  analogWrite(BR_ENA, 200);   
  analogWrite(FR_ENB, 200);   
  analogWrite(BL_ENB, 200);   
  analogWrite(FL_ENA, 200); 
  digitalWrite(MR_IN1, LOW);
  digitalWrite(MR_IN2, LOW);
  digitalWrite(MR_IN3, HIGH);
  digitalWrite(MR_IN4, LOW);
  digitalWrite(ML_IN1, LOW);
  digitalWrite(ML_IN2, LOW);
  digitalWrite(ML_IN3, HIGH);
  digitalWrite(ML_IN4, LOW);
}

void slide_right_front() {
  analogWrite(BR_ENA, 200);   
  analogWrite(FR_ENB, 200);   
  analogWrite(BL_ENB, 200);   
  analogWrite(FL_ENA, 200); 
  digitalWrite(MR_IN1, HIGH);
  digitalWrite(MR_IN2, LOW);
  digitalWrite(MR_IN3, LOW);
  digitalWrite(MR_IN4, LOW);
  digitalWrite(ML_IN1, HIGH);
  digitalWrite(ML_IN2, LOW);
  digitalWrite(ML_IN3, LOW);
  digitalWrite(ML_IN4, LOW);
}

void slide_left_back() {
  analogWrite(BR_ENA, 200);   
  analogWrite(FR_ENB, 200);   
  analogWrite(BL_ENB, 200);   
  analogWrite(FL_ENA, 200); 
  digitalWrite(MR_IN1, LOW);
  digitalWrite(MR_IN2, HIGH);
  digitalWrite(MR_IN3, LOW);
  digitalWrite(MR_IN4, LOW);
  digitalWrite(ML_IN1, LOW);
  digitalWrite(ML_IN2, HIGH);
  digitalWrite(ML_IN3, LOW);
  digitalWrite(ML_IN4, LOW);
}

void slide_right_back() {
  analogWrite(BR_ENA, 200);   
  analogWrite(FR_ENB, 200);   
  analogWrite(BL_ENB, 200);   
  analogWrite(FL_ENA, 200); 
  digitalWrite(MR_IN1, LOW);
  digitalWrite(MR_IN2, LOW);
  digitalWrite(MR_IN3, LOW);
  digitalWrite(MR_IN4, HIGH);
  digitalWrite(ML_IN1, LOW);
  digitalWrite(ML_IN2, LOW);
  digitalWrite(ML_IN3, LOW);
  digitalWrite(ML_IN4, HIGH);
}

void turn_left() {
  analogWrite(BR_ENA, 200);   
  analogWrite(FR_ENB, 200);   
  analogWrite(BL_ENB, 200);   
  analogWrite(FL_ENA, 200); 
  digitalWrite(MR_IN1, HIGH);
  digitalWrite(MR_IN2, LOW);
  digitalWrite(MR_IN3, HIGH);
  digitalWrite(MR_IN4, LOW);
  digitalWrite(ML_IN1, LOW);
  digitalWrite(ML_IN2, HIGH);
  digitalWrite(ML_IN3, LOW);
  digitalWrite(ML_IN4, HIGH);
}

void turn_right() {
  analogWrite(BR_ENA, 200);   
  analogWrite(FR_ENB, 200);   
  analogWrite(BL_ENB, 200);   
  analogWrite(FL_ENA, 200); 
  digitalWrite(MR_IN1, LOW);
  digitalWrite(MR_IN2, HIGH);
  digitalWrite(MR_IN3, LOW);
  digitalWrite(MR_IN4, HIGH);
  digitalWrite(ML_IN1, HIGH);
  digitalWrite(ML_IN2, LOW);
  digitalWrite(ML_IN3, HIGH);
  digitalWrite(ML_IN4, LOW);
}

void stop() {
  analogWrite(BR_ENA, 200);   
  analogWrite(FR_ENB, 200);   
  analogWrite(BL_ENB, 200);   
  analogWrite(FL_ENA, 200); 
  digitalWrite(MR_IN1, LOW);
  digitalWrite(MR_IN2, LOW);
  digitalWrite(MR_IN3, LOW);
  digitalWrite(MR_IN4, LOW);
  digitalWrite(ML_IN1, LOW);
  digitalWrite(ML_IN2, LOW);
  digitalWrite(ML_IN3, LOW);
  digitalWrite(ML_IN4, LOW);
}