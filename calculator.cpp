#include <iostream>
#include <string>

int main() {
  double operand_1, operand_2, result;
  char operation;
  std::cout << "Choose from the operations: +, -, /, *" << std::endl;
  std::cin >> operation;
  std::cout << "Enter the operands in order" << std::endl;
  if (!(std::cin >> operand_1 >> operand_2)) {
    std::cout << "invalid operands" << std::endl;
    return 1;
  }
  switch (operation) {
  case '+':
    // addition
    result = operand_1 + operand_2;
    break;
  case '-':
    // subtraction
    result = operand_1 - operand_2;
    break;
  case '*':
    // multiplication
    result = operand_1 * operand_2;
    break;
  case '/':
    // divison
    if (operand_2 == 0) {
      std::cout << "cannot calculate, division by 0" << std::endl;
      return 1;
    }
    result = operand_1 / operand_2;
    break;
  default:
    // invalid operations
    std::cout << "cannot calculate, invalid operation" << std::endl;
    return 1;
  }
  std::cout << operand_1 << " " << operation << " " << operand_2 << " = "
            << result << std::endl;
  return 0;
}
