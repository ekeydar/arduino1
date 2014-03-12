// Controlling a servo position using a potentiometer (variable resistor) 
// by Michal Rinott <http://people.interaction-ivrea.it/m.rinott> 

#include <Servo.h> 
 
Servo myservo;  // create servo object to control a servo 
 
int potpin = 0;  // analog pin used to connect the potentiometer
int val;    // variable to read the value from the analog pin 
 
void setup() 
{ 
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object 
} 
 
void loop() 
{ 
  int ad = analogRead(potpin);            // reads the value of the potentiometer (value between 0 and 1023) 
  ad = map(ad,0,1023,10,30);
  //val = map(val, 0, 1023, 0, 179);     // scale it to use it with the servo (value between 0 and 180) 
  val = val % 180;
  myservo.write(val);                  // sets the servo position according to the scaled value 
  val = val + 1;
  delay(ad);                           // waits for the servo to get there 
} 
