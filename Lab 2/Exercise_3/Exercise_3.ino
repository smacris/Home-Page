#define LED_PIN 13

int LEDstatus = 0;

void setup() {
 pinMode(LED_PIN, OUTPUT);
 Serial.begin(9600);

}

void loop() {
  LEDstatus = digitalRead(LED_PIN);
  if(LEDstatus == HIGH){
    Serial.println("Hello World!");
  } else {

    Serial.println("It's 2023");
  }

}
