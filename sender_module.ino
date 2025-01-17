#include <Wire.h>
#include "rgb_lcd.h"

const int laserPin = 7;

void setup() {
  pinMode(laserPin, OUTPUT);
}

char str[] = "electrical";
int send_flag = 0;

void sendString(char s[]) {
  int i = 0;
  while (s[i] != 0) {
    sendchar(s[i]);
    i++;
  }
}

void sendchar(char ch) {
  char sndChar = ch - 'a' + 1;
  for (int count = 0; count < sndChar; count++) {
    digitalWrite(laserPin, HIGH);
    delay(500);
    digitalWrite(laserPin, LOW);
    delay(500);
  }
  delay(1000);
}

void loop() {
  if (send_flag == 0) {
    sendString(str);
    send_flag = 1;
  }
}