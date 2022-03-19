#include <Servo.h>
int servo_pin=9;
Servo myservo;

int my_delay=10;
void setup() {
  myservo.attach(servo_pin);
}

void loop() {

  for(int i =0;i<=180;i++){
    myservo.write(i);
    delay(my_delay);
  }
  for(int i =180;i>=0;i--){
    myservo.write(i);
    delay(my_delay);
  }
}
