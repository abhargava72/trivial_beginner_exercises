#include <cmath>
#include <iostream>

int main() {
  using std::cout;
  using std::endl;
  using std::sqrt;
  for (char i = 'A'; i <= 'Z'; i++) {
    cout << i;
  }
  cout << "\n";

  double a = 3.0, b = 4.0;
  cout << "the hypotenuse is " << sqrt(a * a + b * b) << endl;
  return 0;
}