#include <Servo.h>
Servo myServo;

void setup() {
  // put your setup code here, to run once:
  myServo.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
  int angleL = 90;
  int rep = 3;
  for(int i = 0; i < rep; i++){
    for(int ii = 0; ii < angleL; ii++){
      myServo.write(ii);
      delay(10);
    }
    for(int dd = angleL; dd > angleL; dd--){
      myServo.write(dd);
      delay(10);
    }
  }
}
