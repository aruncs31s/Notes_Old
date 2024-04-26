#include "configs.h"
#include "project.h"
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
Project SolarTracking;
Project EnergyManagment;
Project EnergyMonitoring;

void setup() {
  SolarTracking.pins.LDR = {.p1 = LDR_TOP_RIGHT,
                            .p2 = LDR_TOP_LEFT,
                            .p3 = LDR_BOTTOM_RIGHT,
                            .p4 = LDR_BOTTOM_LEFT};
  SolarTracking.pins.Servo = {
      .p1 = HORIZONTAL_SERVO,
      .p2 = VERTICAL_SERVO,
  };

  // std::vector<int> avg = SolarTracking.avg_LDR(
  //     SolarTracking.pins.LDR.p1, SolarTracking.pins.LDR.p2,
  //     SolarTracking.pins.LDR.p2, SolarTracking.pins.LDR.p4);
  // const int &x = HORIZONTAL_SERVO;
  // std::cout << avg[1] << "";
  cout << SolarTracking.pins.LDR.p1;
}

void loop() {}

int main() {
  setup();
  main();
}
