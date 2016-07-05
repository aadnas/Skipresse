/*
00 Programs
01 LCD setup
 01.1 Custom symbols
02 PID Library
03 Button setup
04 Serial setup
05 Timers
06 Setup
07 Loop
08 Alarms
09 Screens
10 Temperature and pressure readings
11 Button readings
12 Datalog

*/
// =============================
// 01 LCD setup
// =============================
#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

// =============================
//  01.1 Custom symbols
// =============================
// Custom symbols

// Percent (%) -symbol
byte pr[8] = {
  B00000,
  B10001,
  B00010,
  B00100,
  B01000,
  B10001,
  B00000,
};

// Degree (˚) -symbol
byte degr[8] = {
  B00110,
  B01001,
  B01001,
  B00110,
  B00000,
  B00000,
  B00000,
};

// Norwegian symbols
byte oe[8] = {
  B00000,
  B00000,
  B01101,
  B10010,
  B10101,
  B01001,
  B10110,
};

byte aa[8] = {
  B01110,
  B00100,
  B01110,
  B00001,
  B01111,
  B10001,
  B01111,
};
