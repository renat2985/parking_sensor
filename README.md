# parking_sensor
Parking sensor. Mounted on the wall of the garage and shows how close the car is to the wall.

![image](https://github.com/renat2985/parking_sensor/blob/main/IMG_5782.jpg)



![image](https://github.com/renat2985/parking_sensor/blob/main/shematic.png)

Need:
- Led strip: WS2812B
- Ultrasonic Sensor HC-SR04
- NodeMCU 8266


```
#define PIN 0 // PIN LED
#define PIN_TRIG 4 // PIN
#define PIN_ECHO 5 // PIN
#define NUMPIXELS 15 // NeoPixel led count
```
