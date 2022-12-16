#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h> // Required for 16 MHz Adafruit Trinket
#endif

#define PIN 2 // PIN LED
#define PIN_TRIG 4 // PIN
#define PIN_ECHO 5 // PIN
#define NUMPIXELS 15 // NeoPixel led count
long duration, cm, ledOn;

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
#if defined(__AVR_ATtiny85__) && (F_CPU == 16000000)
  clock_prescale_set(clock_div_1);
#endif

  pinMode(PIN_TRIG, OUTPUT); // Определяем вывод
  pixels.begin(); // INITIALIZE NeoPixel strip object (REQUIRED)
}

void loop() {
  digitalWrite(PIN_TRIG, LOW);
  delayMicroseconds(5);
  digitalWrite(PIN_TRIG, HIGH);
  // Установим высокий уровень сигнала
  delayMicroseconds(10);
  digitalWrite(PIN_TRIG, LOW);
  //  Определяем задержку сигнала
  duration = pulseIn(PIN_ECHO, HIGH);
  // Преобразуем время задержки в расстояние
  cm = (duration / 2) / 29.1;

  pixels.clear();
  if (cm >= 0 && cm <= 100) {
    ledOn = map(cm, 0, 100, NUMPIXELS, 0);
    for (int i = 0; i < ledOn; i++) {
      if (ledOn > (NUMPIXELS-1)) {
        pixels.setPixelColor(i, pixels.Color(255, 0, 0));
      } else if (ledOn > (NUMPIXELS-3)) {
        pixels.setPixelColor(i, pixels.Color(0, 0, 255));
      } else {
        pixels.setPixelColor(i, pixels.Color(0, 255, 0));
      }
      pixels.show();
    }
  }

}
