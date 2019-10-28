#include <Servo.h>

// define servos
Servo servo1;
Servo servo2;
Servo servo3;

// define variables
int pos;
int initial;
int diff;
int pos2;

void setup() {
  // attach servos 
  Serial.begin(9600);
  // define pins
  servo1.attach(9);
  servo2.attach(6);
  servo3.attach(11);
  pinMode(13, OUTPUT);
}

void loop() {
  // inital position of arm
  servo1.write(42);
  servo2.write(30);
  servo3.write(180);
  delay(3000); // wait 3 seconds
  initial = 52;
  servo1.write(initial);
  servo2.write(initial);
  servo3.write(180);
  delay(1000);

  // Vacuum on
  delay(1000 );
  digitalWrite(13,HIGH); // run current through motor
  
  // DOWN
  // servo 1 & 2 down
  for (pos = initial; pos <= initial*2; pos += 1) {
    servo1.write(pos);
    delay(15);
    diff = pos - initial;
    pos2 = initial - diff;
    servo2.write(pos2);
    delay(15);   
  }

  delay(7000); // wait for plate to attach
  
  // UP
  // servo 1 and 2 up
  for (pos = initial*2; pos >= initial; pos -= 1) {
    servo1.write(pos);
    delay(15);
    diff = pos - initial;
    pos2 = initial - diff;
    servo2.write(pos2);
    delay(15);  
  }
  
  delay(1000); //wait 1 second
  
  // ROTATE
  // servo 3 rotate clockwise
  for (pos = 180; pos >= 71; pos -= 1) {
    servo3.write(pos);
    delay(15);
  }
  
  delay(1000); //wait 1 second
  
  // DOWN
  // servo 1 & 2 down
  for (pos = initial; pos <= initial*2; pos += 1) {
    servo1.write(pos);
    delay(15);
    diff = pos - initial;
    pos2 = initial - diff;
    servo2.write(pos2);
    delay(15);   
  }
  
  // Vacuum off to drop plate
  delay(1000); //wait 1 second
  digitalWrite(13,LOW); // run current away from motor
  delay(7000); //wait 7 second
  
  // UP
  // servo 1 & 2 up
  for (pos = initial*2; pos >= initial; pos -= 1) {
    servo1.write(pos);
    delay(15);
    diff = pos - initial;
    pos2 = initial - diff;
    servo2.write(pos2);
    delay(15);  
  }
  
  delay(1000); //wait 1 second
  
  // ROTATE
  // servo 3 rotate anticlockwise
  for (pos = 71; pos <= 180; pos += 1) {
    servo3.write(pos);
    delay(15);
  }
  
  delay(3000); //wait 3 second
  
  servo1.write(42);
  servo2.write(10);
  servo3.write(180);
  
  // STOP - upload blink when done
  delay(60000);

}
