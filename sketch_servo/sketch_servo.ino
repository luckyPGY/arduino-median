#include <Servo.h>
Servo myServo;

void setup() {
  myServo.attach(9);
  myServo.write(0);
  delay(500);
  int angleL = 90;
  int angleS = 0;
  int rep = 3;
  for(int i = 0; i < rep; i++){
    for(int ii = angleS; ii <= angleL; ii++){
      myServo.write(ii);
      delay(10);
    }
    for(int dd = angleL; dd >= angleS; dd--){
      myServo.write(dd);
      delay(10);
    }
  }
}

void loop() {

}
