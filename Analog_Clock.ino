#include <FastLED.h>
#include <elapsedMillis.h>
#define LED_COUNT 60   
struct CRGB leds[LED_COUNT];
#include "Wire.h"
#define DS3231_I2C_ADDRESS 0x68

elapsedMillis hourTest;
elapsedMillis minuteTest;
elapsedMillis secondTest;
elapsedMillis directionTimer;

int Twelve[] = {0,1,2,3,4};
int One[] = {5,6,7,8,9};
int Two[] = {10,11,12,13,14};
int Three[] = {15,16,17,18,19};
int Four[] = {20,21,22,23,24};
int Five[] = {25,26,27,28,29};
int Six[] = {30,31,32,33,34};
int Seven[] = {35,36,37,38,39};
int Eight[] = {40,41,42,43,44};
int Nine[] = {45,46,47,48,49};
int Ten[] = {50,51,52,53,54};
int Eleven[] = {55,56,57,58,59};

byte s;
byte sh; //second hand
byte m;
byte mh; // minute hand
byte h;

byte hDirection;
byte mDirection;
byte sDirection;


byte clockMode;
byte handSelect;

byte secondHandHue = 96;
byte minuteHandHue = 160;
byte hourHandHue = 0;

byte secondHandSat = 255;
byte minuteHandSat = 255;
byte hourHandSat = 255;

byte secondHandVal = 255;
byte minuteHandVal = 255;
byte hourHandVal = 255;

void setup() {

  Serial.begin (9600);
  FastLED.addLeds<WS2812,33,BRG>(leds, 5); //12
  FastLED.addLeds<WS2812,29,BRG>(leds, 5, 10); //1
  FastLED.addLeds<WS2812,36,BRG>(leds, 10, 15); //2 
  FastLED.addLeds<WS2812,26,BRG>(leds, 15, 20); //3 
  FastLED.addLeds<WS2812,39,BRG>(leds, 20, 25); //4 
  FastLED.addLeds<WS2812,32,BRG>(leds, 25, 30); //5 
  FastLED.addLeds<WS2812,34,BRG>(leds, 30, 35); //6 
  FastLED.addLeds<WS2812,28,BRG>(leds, 35, 40); //7 
  FastLED.addLeds<WS2812,35,BRG>(leds, 40, 45); //8 
  FastLED.addLeds<WS2812,31,BRG>(leds, 45, 50); //9 
  FastLED.addLeds<WS2812,37,BRG>(leds, 50, 55); //10 
  FastLED.addLeds<WS2812,38,BRG>(leds, 55, 60); //11 

  FastLED.setBrightness(50);
  Wire.begin();

for (int i = 0; i< LED_COUNT; i++){
leds[i] = CHSV (0, 0, 0);
} LEDS.show();

 // set the initial time here:
  // DS3231 seconds, minutes, hours, day, date, month, year
  // setDS3231time(0,34,22,7,3,6,17);


//reveive transmissions
 Wire.begin(1);  //device 1
 Wire.onReceive(receiveEvent);

}

void loop() {
//background stuff that needs to be there to display hands
makeItTick ();
//rotatingHands ();
//links the hands to the real time clock
displayHands();
//crazyRotatingHands ();
//print time and date to serial
displayTime ();



} //end main loop


void receiveEvent(int howMany) {
  clockMode = Wire.read();
  handSelect = Wire.read();
 if (handSelect == 0){secondHandHue = Wire.read();}
  if (handSelect == 1){minuteHandHue = Wire.read();}
  if (handSelect == 2){hourHandHue = Wire.read();}

   if (handSelect == 0){secondHandSat = Wire.read();}
  if (handSelect == 1){minuteHandSat = Wire.read();}
  if (handSelect == 2){hourHandSat = Wire.read();}

   if (handSelect == 0){secondHandVal = Wire.read();}
  if (handSelect == 1){minuteHandVal = Wire.read();}
  if (handSelect == 2){hourHandVal = Wire.read();}

}
