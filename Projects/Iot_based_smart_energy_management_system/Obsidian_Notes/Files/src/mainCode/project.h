#include <vector>
class Project {
public:
  struct pins {
    struct LDR {

      int p1, p2, p3, p4;
      std::vector<int> avg_LDR(int p1, int p2, int p3, int p4);
    } LDR;
    struct Servo {

      int p1, p2, p3, p4;
    } Servo;
    struct Relay {

      int p1, p2, p3, p4;
    } Relay;

  } pins;
  std::vector<int> avg_LDR(int p1, int p2, int p3, int p4) {
    std::vector<int> arr = {p1, p2, p3, p4};
    return arr;
  }
  Project() {}
};
