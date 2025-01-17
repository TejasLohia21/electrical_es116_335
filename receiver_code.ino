#include <Wire.h>
#include "rgb_lcd.h"

const int receiverPin = A0;
rgb_lcd lcd;

int firstPulseFlag = false;
int pulseReceivedFlag = false;
int pulseCount = 0;
int charRcvedFlag = 0;
int noOfPulses;
int printFlag = false;
int high_count = 0;
char textBuffer[50] = "";
int bufferIndex = 0;

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.setRGB(255, 0, 0);
}

void loop() {
  char ch[2] = "a";
  int ldrValue = analogRead(receiverPin);
  Serial.println(ldrValue);

  if (high_count > 10) {
    high_count = 0;
    charRcvedFlag = true;
    ch[0] = ch[0] + pulseCount - 1;
    if (bufferIndex < sizeof(textBuffer) - 1) {
      textBuffer[bufferIndex++] = ch[0];
      textBuffer[bufferIndex] = '\0';
    }
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(textBuffer);
    pulseReceivedFlag = false;
    firstPulseFlag = false;
    pulseCount = 0;
  }

  if (pulseReceivedFlag == true) {
    if (ldrValue > 800) {
      high_count++;
    } else {
      pulseReceivedFlag = false;
      firstPulseFlag = false;
    }
  }

  if (firstPulseFlag == false) {
    if (ldrValue < 100) {
      delay(200);
      ldrValue = analogRead(receiverPin);
      if (ldrValue < 100) {
        pulseCount++;
        firstPulseFlag = true;
        high_count = 0;
      }
    }
  } else {
    if (ldrValue > 1000) {
      pulseReceivedFlag = true;
      firstPulseFlag = false;
      high_count = 0;
      noOfPulses++;
    }
  }

  delay(100);
}