#include <Servo.h>

int flexPin = 0;
int servoPin = 13;

Servo FingerServo;

void setup(void) {
  Serial.begin(9600);
  FingerServo.attach(servoPin);
}

void loop(void) {
  int flexRaw = analogRead(flexPin);
  Serial.println(flexRaw);
//  delay(1000);

  if (flexRaw > 50) { // open
    FingerServo.write(180);
  } else { // closed
    FingerServo.write(0);
  } 
//  delay(15); 
}

