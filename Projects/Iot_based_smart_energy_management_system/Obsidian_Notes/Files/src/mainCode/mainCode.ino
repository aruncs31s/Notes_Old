#include <iostream>

  class Project {
  public:
    struct LDR_pins {
      const int pin1, pin2, pin3, pin4;

      // Constructor to initialize the LDR pins
      LDR_pins(int p1, int p2, int p3, int p4)
          : pin1(p1), pin2(p2), pin3(p3), pin4(p4) {}
    } LDR;

    // Constructor to initialize the LDR member
    Project(int p1,
            int p2,
            int p3,
            int p4) : LDR(p1, p2, p3, p4) {}
  };

  Project SolarTracking(35, 39, 34, 36);


int LDR_LEFT_TOP = SolarTracking.LDR.pin1,
    LDR_LEFT_BOTTOM = SolarTracking.LDR.pin2,
    LDR_RIGHT_TOP = SolarTracking.LDR.pin3,
    LDR_RIGHT_BOTTOM = SolarTracking.LDR.pin4;
    
int LDR_LEFT_TOP = 10;

void setup(){


}
void loop(){
  
}