# EduCube
ESP32-CAM:
In Arduino IDE:
1.	File > Preferences: Under Additional Board Manager URLs, paste the following link: https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json
2.	Tools > Board > Boards Manager: Install ESP32 by Espressif Systems
3.	Tools > Board > ESP32 Arduino: Select AI Thinker ESP32-CAM
4.	Under Tools, set the following options: Flash Frequency: 40MHz, Partition Scheme: Huge APP (3MB No OTA), Upload Speed: 115200
5.	Holding down the IO0 button on the ESP32-CAM, Upload the code to the ESP32-CAM
6.	Open the serial monitor, set baud rate to 115200
7.	Press the reset button on the ESP32-CAM
8.	Paste the IP address displayed on the serial monitor to a web browser
You should see the ESP32-CAM Interface, where you can start livestreaming from the camera

GY91:
Connections:
GY91	ESP32
VCC	VCC
GND	GND
SDA	IO14
SCL	IO15
In Arduino IDE:
1.	Sketch > Include Library > Manage Libraries: MPU9250_asukiaaa
2.	Board: ESP32 Wrover Module
3.	Port: Select the port connected to the GY91
4.	Open the serial monitor (baud rate set to 115200)
The serial monitor will display the data collected by the GY91

HC-12:
Using 2 HC-12s, send a signal from 1 HC-12 (the transmitter which will be on the balloon) to another HC-12 (the receiver which will be on the ground). Each HC-12 will be connected to a ESP32 as shown below.
Connections:
HC-12	ESP32
VCC	VCC
GND	GND
RXD	U0T
TXD	U0R
SET	Not connected

Upload the code to the transmitter HC-12. The code tells the HC-12 to repeatedly send a message out, which will be received by the receiver HC-12. From the serial monitor, the receiver HC-12 will be able to receive the message.

Mission:
Using the ESP32-CAM, GY91 and the HC-12, various missions can be conducted by EduCube. A few examples are that the ESP32-CAM can take pictures from the balloon, which are then transmitted via the HC-12 to a laptop on the ground. The GY91 can also collect data of the atmospheric pressure and temperature, which then can also be transmitted down via the HC-12. Your goal is to design a mission for EduCube.
