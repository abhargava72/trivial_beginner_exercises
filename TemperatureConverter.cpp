#include <iostream>

int main() {
  using std::cin;
  using std::cout;

  constexpr double CELSIUS_KELVIN_OFFSET = 273.15;

  std::string scale;
  double fahrenheit, celsius, kelvin;
  cout << "which temperature scale would you like to input?\n";
  cin >> scale;
  cout << "how many degrees would you look converted?\n";
  if (scale == "fahrenheit") {
    double fahrenheit;
    cin >> fahrenheit;
    double celsius = (5.0 / 9) * (fahrenheit - 32);
    double kelvin = CELSIUS_KELVIN_OFFSET + celsius;
    cout << fahrenheit << " degrees fahrenheit is equivalent to " << celsius
         << " degrees celsius and " << kelvin << " degrees kelvin.\n";
  } else if (scale == "celsius") {
    double celsius;
    cin >> celsius;
    double fahrenheit = (celsius * (9.0 / 5)) + 32;
    double kelvin = celsius + CELSIUS_KELVIN_OFFSET;
    cout << celsius << " degrees celsius is equivalent to " << fahrenheit
         << " degrees fahrenheit and " << kelvin << " degrees kelvin.\n";
  } else if (scale == "kelvin") {
    double kelvin;
    cin >> kelvin;
    double celsius = kelvin - CELSIUS_KELVIN_OFFSET;
    double fahrenheit = (celsius * (9.0 / 5)) + 32;
    cout << kelvin << " degrees kelvin is equivalent to " << fahrenheit
         << " degrees fahrenheit and " << celsius << " degrees celsius.\n";
  } else {
    cout << "invalid scale of temperature, please try again.\n";
  }
  return 0;
}
