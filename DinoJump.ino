#include<Servo.h>

int pos = 0;
int servoPin = 9;
int servoDelay = 25;
Servo pointer;

int ldrPin = A0;
int led = 13;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pointer.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
  int x = analogRead(ldrPin);
  if(x <= 22) {
    pointer.write(25);
  } else {
    pointer.write(0);
  }
  delay(1);
  Serial.println(x);
}
