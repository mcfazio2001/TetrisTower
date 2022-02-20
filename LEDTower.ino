#include <Adafruit_NeoPixel.h>

#define DATA_PIN 9
#define CLK_PIN 12
#define CS_PIN 13 
#include "imagedata.h"


                       


// Parameter 1 = number of pixels in panel
// Parameter 2 = pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)

const int NUM_PIXELS = 64;
Adafruit_NeoPixel panel = Adafruit_NeoPixel(NUM_PIXELS, DATA_PIN, NEO_RGB + NEO_KHZ800);

void setup()
{
  panel.begin();
  panel.setBrightness(64);
  panel.show();   // Initialize all pixels to 'off'

  digitalWrite(CS_PIN, HIGH);
  pinMode(DATA_PIN, OUTPUT);
  pinMode(DATA_PIN, OUTPUT);
  pinMode(CLK_PIN, OUTPUT);
  
}

void loop()
{
  RenderFrame(ledarray);
  delay(500);
//  RenderFrame(ledarray1);
 // delay(500);
}

void RenderFrame(const uint32_t *arr)
{
  for (uint16_t t = 0; t < NUM_PIXELS; t++)
  {
    panel.setPixelColor(t, arr[t]);
  }
  panel.show();
}
