#include <iostream>

int main() {
  using std::cin;
  using std::cout;
  cout << "1. if\n2. if else\n3. if else if staircase/ladder\n4. nested "
          "if\n5. switch\n";
  int choice;
  cin >> choice;
  switch (choice) {
  case 1:
    cout << "if (expression) statement;\n";
    break;
  case 2:
    cout << "if (expression) statement;\nelse statement;\n";
    break;
  case 3:
    cout << "if (expression) statement;\nelse if (expression) statement;\nelse "
            "if (expression) statement;\nelse statement;\n";
    break;
  case 4:
    cout << "if (expression)\n  if(expression) statement;\n";
    break;
  case 5:
    cout << "switch (expression)\n  case case_constant_1:\n    statement;\n    "
            "break;\n";
    break;
  }
}