#include <iostream>

int main() {
  double balance = 100.0;
  int choice = 0;
  while (choice != 4) {
    std::cout << "====== ATM ======" << std::endl;
    std::cout << "1. Deposit" << std::endl;
    std::cout << "2. Withdraw" << std::endl;
    std::cout << "3. Check Balance" << std::endl;
    std::cout << "4. Exit" << std::endl;
    std::cout << "Choice: " << std::endl;
    if (!(std::cin >> choice)) {
      std::cout << "invalid input" << std::endl;
      std::cin.clear();
      std::cin.ignore(1000, '\n');
      continue;
    }
    if (choice < 1 || choice > 4) {
      std::cout << "invalid choice" << std::endl;
      continue;
    }
    switch (choice) {
    case 1: {
      double deposit;
      std::cout << "enter deposit amount" << std::endl;
      std::cin >> deposit;
      if (deposit <= 0) {
        std::cout << "deposit amount is not positive please try again"
                  << std::endl;
        break;
      }
      balance += deposit;
      std::cout << "updated balance: " << balance << std::endl;
      break;
    }
    case 2: {
      double withdraw;
      std::cout << "enter withdrawl amount" << std::endl;
      std::cin >> withdraw;
      if (withdraw < 0) {
        std::cout << "withdrawl amount is negative, please try again."
                  << std::endl;
        break;
      }
      if (withdraw > balance) {
        std::cout << "withdraw is greater than balance, insufficient funds. "
                     "please try again."
                  << std::endl;
        break;
      }
      balance -= withdraw;
      std::cout << "updated balance: " << balance << std::endl;
      break;
    }
    case 3: {
      std::cout << "balance: " << balance << std::endl;
      break;
    }
    case 4: {
      std::cout << "exiting atm" << std::endl;
      break;
    }
    }
  }
  return 0;
}