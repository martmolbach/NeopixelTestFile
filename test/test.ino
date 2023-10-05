#include <Adafruit_NeoPixel.h>

#define PIN            13  
#define NUMPIXELS      32 

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();  
  strip.show();   
}

void staticLight() {
    for(int i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i, strip.Color(0, 255, 0));  
    strip.show();  
  }
}

void loop() {
  
}
