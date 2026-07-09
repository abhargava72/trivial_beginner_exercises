#include <iostream>
#include <string>

enum class TrafficLight { RED, YELLOW, GREEN };

int main() {
  TrafficLight traffic_light = TrafficLight::RED;
  std::string light;
  for (int i = 1; i < 6; i++) {

    switch (traffic_light) {
    case (TrafficLight::RED):
      light = "RED";
      traffic_light = TrafficLight::GREEN;
      break;

    case (TrafficLight::YELLOW):
      light = "YELLOW";
      traffic_light = TrafficLight::RED;
      break;

    case (TrafficLight::GREEN):
      light = "GREEN";
      traffic_light = TrafficLight::YELLOW;
      break;
    }
    std::cout << "Cycle " << i << std::endl;
    std::cout << "Current Light: " << light << std::endl;
  }
  return 0;
}