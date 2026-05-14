#include <Arduino.h>

const int TOUCH_PIN = 25;   // GPIO25 = TOUCH1
int baseline = 0;
bool currentlyTouched = false;

void setup() {
  Serial.begin(115200);
  delay(1000);

  // Calibrate untouched baseline
  for (int i = 0; i < 40; i++) {
    baseline += touchRead(TOUCH_PIN);
    delay(50);
  }
  baseline /= 40;

  Serial.print("BASELINE:");
  Serial.println(baseline);
}

void loop() {
  int value = touchRead(TOUCH_PIN);
  int threshold = baseline * 0.75;

  Serial.print("VALUE:");
  Serial.println(value);

  if (value < threshold && !currentlyTouched) {
    currentlyTouched = true;
    Serial.println("TOUCH");
  }

  if (value > threshold * 1.1 && currentlyTouched) {
    currentlyTouched = false;
    Serial.println("RELEASE");
  }

  delay(40);
}