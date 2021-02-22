#include <Arduino.h>
#include <Keyboard.h>

const int buttonPin1 = 2;
const int buttonPin2 = 3;

int buttonState1 = 0;
int buttonState2 = 0;


void setup() {
  Serial.begin(9600);

  pinMode(buttonPin1, INPUT_PULLUP);
  pinMode(buttonPin2, INPUT_PULLUP);
}

void loop() {
  buttonState1 = digitalRead(buttonPin1);
  if (buttonState1 == LOW) {
    Keyboard.write(KEY_DOWN_ARROW);
    delay(500);
  }

  buttonState2 = digitalRead(buttonPin2);
  if (buttonState2 == LOW) {
    Keyboard.write(KEY_UP_ARROW);
    delay(500);
  }
}
