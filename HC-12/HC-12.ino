#include <HardwareSerial.h>

// Initialize HC-12 Serial
HardwareSerial SerialHC12(1);

void setup() {
  Serial.begin(9600);                     // For Serial Monitor
  Serial.println("HC-12 Sender Initialized");
}

void loop() {
  Serial.println("Message sent: Hello from HC-12!");
  delay(1000);                              // Delay 1 second
}