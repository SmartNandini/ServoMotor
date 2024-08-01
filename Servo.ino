#include <Servo.h>
Servo servo;
int pin=9;
int angle;
void setup() {
  // put your setup code here, to run once:
  servo.attach(pin);
  }
void loop() {
  // put your main code here, to run repeatedly:
  servo.write(0);
  delay(3000);
  servo.write(180);
  delay(3000);
  servo.write(0);
  delay(3000);
  for(angle=0;angle<=180;angle++){
    servo.write(angle);
    delay(50);
  }
  delay(3000);
  for(angle=180;angle>=0;angle--){
    servo.write(angle);
    delay(50);
  }
  }
