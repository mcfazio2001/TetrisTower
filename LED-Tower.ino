#include <Adafruit_NeoPixel.h>

#define PIN 2


uint32_t ledarray[] = {
                       0xFF000000, 0x0FF00000, 0x0000FF00, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
                       0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFF000000, 
                       0xFF000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
                       0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFF000000, 
                       0xFF000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
                       0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFF000000, 
                       0xFF000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
                       };
uint32_t ledarray1[] = {
                       0xFF0000FF, 0x00FF0000, 0x00000000, 0x0FF00000, 0x00000000, 0x0000FF00, 0x00000000, 0x00000000, 
                       0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFF000000, 
                       0xFF000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
                       0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00FF0000, 0x00000000, 0x00000000, 0xFF000000, 
                       0xFF000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
                       0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFF000000, 
                       0xFF000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
                       };

// Parameter 1 = number of pixels in strip
// Parameter 2 = pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)

const int NUM_PIXELS = 50;
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_PIXELS, PIN, NEO_RGB + NEO_KHZ800);

void setup()
{
  strip.begin();
  strip.setBrightness(64);
  strip.show();   // Initialize all pixels to 'off'
}

void loop()
{
  RenderFrame(ledarray);
  delay(500);
  RenderFrame(ledarray1);
  delay(500);
}

void RenderFrame(const uint32_t *arr)
{
  for (uint16_t t = 0; t < NUM_PIXELS; t++)
  {
    strip.setPixelColor(t, arr[t]);
  }
  strip.show();
}



