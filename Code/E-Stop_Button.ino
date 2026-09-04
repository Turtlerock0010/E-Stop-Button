#include <Adafruit_NeoPixel.h>
#include "USB.h"
#include "USBHIDKeyboard.h"

const int buttonPin = 47;  // the number of the pushbutton pin

// variables will change:
int buttonState = 0;  // variable for reading the pushbutton status

bool buttonPressed = false;

USBHIDKeyboard Keyboard;

void setup() {
  Serial.begin(115200);

  // USB and keyboard init
  Keyboard.begin();
  USB.begin();

  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT_PULLUP);
  Serial.println("ESP32-S3 Button Ready.");
}

void loop() {
  buttonState = digitalRead(buttonPin);
  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:

  if (buttonState == LOW) {
    buttonPressed = true;

    Keyboard.print(' ');
  } else {

  }
  delay(10);
}
