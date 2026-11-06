#include <Arduino.h>
#define RED_LED_PIN     10
#define BLUE_LED_PIN    5
#define GREEN_LED_PIN   6
#define DELAY_MS        150

void setup() {
  // Initialize serial communication at 57600 bits per second
  Serial.begin(57600);
  pinMode(RED_LED_PIN, OUTPUT);
  pinMode(BLUE_LED_PIN, OUTPUT);
  pinMode(GREEN_LED_PIN, OUTPUT);
  digitalWrite(RED_LED_PIN, LOW);
  digitalWrite(BLUE_LED_PIN, LOW);
  digitalWrite(GREEN_LED_PIN, LOW);

  Serial.print("Setup complete");
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(RED_LED_PIN, HIGH);
  digitalWrite(BLUE_LED_PIN, LOW);
  digitalWrite(GREEN_LED_PIN, LOW);
  delay(DELAY_MS);
  digitalWrite(RED_LED_PIN, LOW);
  digitalWrite(BLUE_LED_PIN, HIGH);
  digitalWrite(GREEN_LED_PIN, LOW);
  delay(DELAY_MS);
  digitalWrite(RED_LED_PIN, LOW);
  digitalWrite(BLUE_LED_PIN, LOW);
  digitalWrite(GREEN_LED_PIN, HIGH);
  delay(DELAY_MS); 
}
