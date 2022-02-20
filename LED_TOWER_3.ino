#include <Adafruit_NeoPixel.h>

#define DATA_PIN 9
#define CLK_PIN 12
#define CS_PIN 13 


const int NUM_PIXELS = 64;
Adafruit_NeoPixel panel = Adafruit_NeoPixel(NUM_PIXELS, DATA_PIN, NEO_RGB + NEO_KHZ800);

void setup()
{
  panel.begin();
  panel.setBrightness(64);
  panel.show();   

  digitalWrite(CS_PIN, HIGH);
  pinMode(DATA_PIN, OUTPUT);
  pinMode(DATA_PIN, OUTPUT);
  pinMode(CLK_PIN, OUTPUT);
  
}

void loop()
{
  RenderFrame(ledarray);
  delay(500);

}

void RenderFrame(const uint32_t *arr)
{
  for (uint16_t t = 0; t < NUM_PIXELS; t++)
  {
    panel.setPixelColor(t, arr[t]);
  }
  panel.show();
}



