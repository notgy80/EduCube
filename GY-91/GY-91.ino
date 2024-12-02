#include <Wire.h>
#include <MPU9250_asukiaaa.h>

#define MPU9250_ADDRESS 0x68  // Default I2C address for MPU9250

MPU9250_asukiaaa mpu(MPU9250_ADDRESS);  // Create an MPU object with the I2C address

void setup() {
  Serial.begin(115200);
  Wire.begin(14,15); //(SDA,SCL)

  // Initialize accelerometer, gyroscope, and magnetometer
  mpu.beginAccel();  // Initialize accelerometer
  mpu.beginGyro();   // Initialize gyroscope
  mpu.beginMag();    // Initialize magnetometer

  Serial.println("MPU9250 initialized. Ensure readings are valid.");
}

void loop() {
  // Update sensor readings
  mpu.accelUpdate();  // Update accelerometer data
  mpu.gyroUpdate();   // Update gyroscope data
  mpu.magUpdate();    // Update magnetometer data

  // Print accelerometer values
  Serial.print("Accel X: ");
  Serial.print(mpu.accelX());
  Serial.print(" Y: ");
  Serial.print(mpu.accelY());
  Serial.print(" Z: ");
  Serial.println(mpu.accelZ());

  // Print gyroscope values
  Serial.print("Gyro X: ");
  Serial.print(mpu.gyroX());
  Serial.print(" Y: ");
  Serial.print(mpu.gyroY());
  Serial.print(" Z: ");
  Serial.println(mpu.gyroZ());

  // Print magnetometer values
  Serial.print("Mag X: ");
  Serial.print(mpu.magX());
  Serial.print(" Y: ");
  Serial.print(mpu.magY());
  Serial.print(" Z: ");
  Serial.println(mpu.magZ());

  delay(500);
}