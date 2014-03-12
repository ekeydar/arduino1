/*
  Blink
 Turns on an LED on for one second, then off for one second, repeatedly.
 
 This example code is in the public domain.
 */

// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led1 = 13;
int led2 = 12;
int led3 = 11;

int period1= 2;
int period2 = 4;
int period3 = 8;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led1, OUTPUT);     
  pinMode(led2, OUTPUT);  
  pinMode(led3, OUTPUT);    
}

// the loop routine runs over and over again forever:
void loop() {
  int i = 0;
  for (i=0 ; i < 100 ; i++) {
    if (i % period1 == 0) {
      if ( i % (period1*2) == 0) {
        digitalWrite(led1,HIGH);
      } 
      else {
        digitalWrite(led1,LOW);
      }
    }
    if (i % period2 == 0) {
      if ( i % (period2*2) == 0) {
        digitalWrite(led2,HIGH);
      } 
      else {
        digitalWrite(led2,LOW);
      }
    } 
    if (i % period3 == 0) {
      if ( i % (period2*3) == 0) {
        digitalWrite(led3,HIGH);
      } 
      else {
        digitalWrite(led3,LOW);
      }
    } 
    delay(100);
  }
}

