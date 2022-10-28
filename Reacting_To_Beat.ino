#include <FastLED.h>
#define NUM_LEDS 60
#define DATA_PIN 6
#define MIC_PIN A4
#define REDPIN 4
CRGB leds[NUM_LEDS];
uint8_t myhue = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(REDPIN, OUTPUT);
  FastLED.addLeds<WS2812, DATA_PIN, GRB>(leds, NUM_LEDS);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Turn the first led red for 1 second
      int val = analogRead(MIC_PIN);
        // fire();
      int mic = digitalRead(MIC_PIN);
      Serial.println(mic);
      if(mic!=0){
       fire();
       
      }
      
      FastLED.clear();
      
}

void fire(){
        int val = analogRead(MIC_PIN);
        int numLedsToLight = map(val, 0, 1023, 0, NUM_LEDS);
        
        Serial.println(numLedsToLight);
        // First, clear the existing led values
        FastLED.clear();

        for(int led = 0; led < numLedsToLight; led++) { 
             
            if(led <= 5){
              leds[led] = CRGB::Orange;
            }
            else if(led <= 6){
              leds[led] = CRGB::Orange;
            }
            else if(led <= 20){
              leds[led] = CRGB::OrangeRed;
            }
            else{
              leds[led] = CRGB::Red;
            }
            FastLED.show();
            
          leds[led] = CRGB::Black;
        
        }
      }