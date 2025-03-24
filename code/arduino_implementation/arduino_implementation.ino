#include <Keyboard.h>

// Mapping from button to pin
const int leftArrowButton = D0;
const int superButton = D3;
const int rightArrowButton = D7;
const int upArrowButton = D10;

void setup() {
  // Arcade buttons are wired from pin to ground, so we need pullup resistor to set pin to high
  pinMode(leftArrowButton, INPUT_PULLUP);
  pinMode(superButton, INPUT_PULLUP);
  pinMode(rightArrowButton, INPUT_PULLUP);
  pinMode(upArrowButton, INPUT_PULLUP);
}
 
void loop() {
  // Stupid code rewrite to include state info for each button
  if (digitalRead(leftArrowButton) == LOW) {
    Keyboard.press(KEY_LEFT_ARROW);
  }
  else {
    Keyboard.release(KEY_LEFT_ARROW);
  }

  if (digitalRead(upArrowButton) == LOW) {
    Keyboard.press(KEY_UP_ARROW);
  }
  else {
    Keyboard.release(KEY_UP_ARROW);
  }

  if (digitalRead(rightArrowButton) == LOW) {
    Keyboard.press(KEY_RIGHT_ARROW);
  }
  else {
    Keyboard.release(KEY_RIGHT_ARROW);
  }

  if (digitalRead(superButton) == LOW) {
    Keyboard.press(' ');
  }
  else {
    Keyboard.release(' ');
  }

}