// Name: 01_arduino.ino
// Purpose: blink led in 1/4 or 1/2 second or keep led on through two push button
// Note: See circuit in this article: https://www.arduino.cc/en/uploads/Tutorial/button.png - https://www.arduino.cc/en/Tutorial/DigitalReadSerial
// ----: the second button it has the same structure.
// Date: 16/01/2017 at 02:14 am
// Author: ENO

// digital pin 2 has a pushbutton attached to it. Give it a name:
int firstPushButton = 2;
int secondPushButton = 3;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  pinMode(firstPushButton, INPUT);
  pinMode(secondPushButton, INPUT);
  // initialize digital pin LED_BUILDTIN as an output:
  pinMode(13, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
    int buttonFirstState = digitalRead(firstPushButton);
    int buttonSecondState = digitalRead(secondPushButton);
  // print out the state of the button:
    //Serial.print(buttonFirstState); // uncomment because I don't want print out in Serial Monitor
    //Serial.println(buttonSecondState); // uncomment because I don't want print out in Serial Monitor
    //delay(1); // delay in between reads for stability
  // if state equal zero the led turn off
    if (buttonFirstState == 1) {
      digitalWrite(13, HIGH); // turn the LED on (High is the voltage level)
    } else if (buttonSecondState == 1) {
      digitalWrite(13, HIGH);   
      delay(500); // 1000 equal a second
      digitalWrite(13, LOW); // turn the LED off (LOW is the voltage level)
      delay(500);
    } else { // when none button it was press
      digitalWrite(12, HIGH);   
      delay(250);
      digitalWrite(12, LOW); // turn the LED off (LOW is the voltage level)
      delay(250);
    }
}
