#include <Keyboard.h>

int lastPin10 = 0;
int lastPin9 = 0;

void setup() {
  pinMode(10, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  Keyboard.begin();
}

void loop() {

   // LEFT
  int newPin10 = digitalRead(10);
  if (newPin10 == 1 && lastPin10 == 0) {
    Keyboard.press(0xd7);
  } else if (newPin10 == 0 && lastPin10 == 1) {
   Keyboard.release(0xd7);
  }
  lastPin10 = newPin10;
 

  // RIGHT
  int newPin9 = digitalRead(9);
  if (newPin9 == 1 && lastPin9 == 0) {
    Keyboard.press(0xd8);
  } else if (newPin9 == 0 && lastPin9 == 1) {
   Keyboard.release(0xd8);
  }
  lastPin9 = newPin9;

  
}
