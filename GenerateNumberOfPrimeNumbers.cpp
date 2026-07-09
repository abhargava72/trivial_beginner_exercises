// determines the number of prime numbers less than or equal to an input
#include <iostream>

bool isPrimeNumber(int num) {
  for (int i = 2; i * i <= num; i++) {
    if (num % i == 0) {
      return false;
    }
  }
  return true;
}
int main() {
  using std::cin;
  using std::cout;

  int num, answer{0};
  cout << "enter the number you would like analyzed\n";
  cin >> num;
  if (num < 2) {
    cout << "enter a number greater than 2\n";
    return 1;
  }
  for (int i = 2; i <= num; i++) {
    if (isPrimeNumber(i)) {
      answer++;
    }
  }
  cout << "the number of prime numbers less than or equal to " << num << " is "
       << answer << "\n";
  return 0;
}
