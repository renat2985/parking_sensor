# parking_sensor
Parking sensor. Mounted on the wall of the garage and shows how close the car is to the wall.

- Led strip: WS2812B
- Ultrasonic Sensor HC-SR04
- NodeMCU 8266

```
#define PIN 0 // PIN LED
#define PIN_TRIG 4 // PIN
#define PIN_ECHO 5 // PIN
#define NUMPIXELS 15 // NeoPixel led count
```

![image](https://github.com/renat2985/parking_sensor/blob/main/img/shematic.png)

<p align="center">
<img src="https://github.com/renat2985/parking_sensor/blob/main/img/stl1.png" width=45% height=45%>
<img src="https://github.com/renat2985/parking_sensor/blob/main/img/stl2.png" width=45% height=45%>
</p>

# Upload instruction
## Specification .bin files

    Module: Generic ESP8266 Module
    Flash Size: 1M
    CPU Frequency: 80Mhz
    Flash Mode: dio
    Flash Frequency: 40Mhz
    Upload Speed: 921600

### You can download the bin file here: [/build/esp8266.esp8266.generic/parking_sensor.ino.bin](https://github.com/renat2985/parking_sensor/raw/main/build/esp8266.esp8266.generic/parking_sensor.ino.bin)

### NodeMCU Flasher
https://github.com/nodemcu/nodemcu-flasher
Download Release: [Win32](https://github.com/nodemcu/nodemcu-flasher/blob/master/Win32/Release/ESP8266Flasher.exe) or [Win64](https://github.com/nodemcu/nodemcu-flasher/blob/master/Win64/Release/ESP8266Flasher.exe).


## :battery: Donation

If you like this project, you can give me a cup of coffee :coffee:

- Bitcoin (BTC): 19xg6pA4RzSW3o4ZUyTyn5t4tY3tqLXHbe
- TonCoin: UQBY_xXK_25L-UHq_h2ocfhS0c_lZoA4PIHxt-SktxLa_So7 
- PayPal [https://www.paypal.me/RKevrels](https://www.paypal.me/RKevrels/5)
