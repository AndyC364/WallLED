# 1 "C:\\Users\\Andy\\AppData\\Local\\Temp\\tmpnjbdm1mu"
#include <Arduino.h>
# 1 "C:/Users/Andy/Dropbox/Wall/WallLED_ThinkPad/wled00/wled00.ino"
# 13 "C:/Users/Andy/Dropbox/Wall/WallLED_ThinkPad/wled00/wled00.ino"
#include "wled.h"
void setup();
void loop();
#line 15 "C:/Users/Andy/Dropbox/Wall/WallLED_ThinkPad/wled00/wled00.ino"
void setup() {
  WLED::instance().setup();
}

void loop() {
  WLED::instance().loop();
}