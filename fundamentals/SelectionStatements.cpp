#include <cmath>
#include <iostream>
#include <limits>

int main() {
  using std::cin;
  using std::cout;
  using std::numeric_limits;
  using std::string;
  // // check positive/negative/zero of a number
  int num;
  cout << "enter a number\n";
  cin >> num;
  if (num > 0)
    cout << num << " is positive\n";
  else if (!num)
    cout << num << " is zero\n";
  else
    cout << num << " is negative\n";

  // check even/odd of a number
  cout << "enter a number\n";
  cin >> num;
  if (num % 2)
    cout << num << " is odd\n";
  else
    cout << num << " is even\n";

  // check if number is divisble by 5
  cout << "enter a number\n";
  cin >> num;
  if (!(num % 5))
    cout << num << " is divisible by 5\n";
  else
    cout << num << " is not divisible by 5\n";

  // check if temperature is safe
  cout << "enter a temperature\n";
  double temp;
  cin >> temp;
  if (temp > 90.0)
    cout << temp << " is unsafe\n";
  else
    cout << temp << " is safe\n";

  // check if character is a vowel
  cout << "enter a character\n";
  char input;
  cin >> input;
  switch (input) {
  case 'a':
  case 'A':
  case 'e':
  case 'E':
  case 'i':
  case 'I':
  case 'o':
  case 'O':
  case 'u':
  case 'U':
    cout << input << " is a vowel\n";
    break;
  default:
    cout << input << " is not a vowel\n";
    break;
  }

  // checks if a year is a leap year
  cout << "enter a year\n";
  int year;
  cin >> year;
  if (!(year % 400) || (!(year % 4) && (year % 100)))
    cout << year << " is a leap year\n";
  else
    cout << year << " is not a leap year\n";

  // voting elgibility
  cout << "enter your age\n";
  int age;
  cin >> age;
  if (age > 17)
    cout << " you can vote\n";
  else
    cout << " you cannot vote\n";

  // largest of two numbers
  cout << "enter two numbers\n";
  int num1, num2;
  cin >> num1 >> num2;
  if (num1 > num2)
    cout << num1 << " is greater than " << num2 << "\n";
  else if (num1 == num2)
    cout << num1 << " is equal to " << num2 << "\n";
  else
    cout << num1 << " is less than " << num2 << "\n";

  // number in range
  cout << "enter a number\n";
  cin >> num;
  if (num >= 1 && num <= 100)
    cout << num << " is in the range\n";
  else
    cout << num << " is not in the range\n";

  // grade calculator
  cout << "enter a grade\n";
  double grade;
  cin >> grade;
  char grade_letter;
  if (grade >= 90.0)
    grade_letter = 'A';
  else if (grade >= 80.0)
    grade_letter = 'B';
  else if (grade >= 70.0)
    grade_letter = 'C';
  else if (grade >= 60.0)
    grade_letter = 'D';
  else
    grade_letter = 'F';
  cout << grade << " is equivalent to " << grade_letter << "\n";

  // shipping cost calculator
  cout << "enter the weight of a package\n";
  double weight;
  cin >> weight;
  int shipping_cost;
  if (weight >= 20)
    shipping_cost = 20;
  else if (weight >= 5)
    shipping_cost = 10;
  else
    shipping_cost = 5;
  cout << weight << " kilograms costs " << shipping_cost << " dollars\n";

  // tax bracket calculator
  cout << "enter your income\n";
  int income;
  string income_status;
  cin >> income;
  if (income >= 100'000)
    income_status = "highest income";
  else if (income >= 50'000)
    income_status = "high income";
  else if (income >= 20'000)
    income_status = "middle income";
  else
    income_status = "low income";
  cout << income << " is " << income_status << "\n";

  // speeding ticket calculator
  cout << "enter the speed you were driving 🚘\n";
  int speed;
  cin >> speed;
  if (speed >= 101)
    cout << "court appearance\n";
  else if (speed >= 81)
    cout << "$200 fine\n";
  else if (speed >= 66)
    cout << "warning\n";
  else
    cout << "no ticket\n";

  // bmi range calculator
  cout << "enter your bmi\n";
  double bmi;
  cin >> bmi;
  if (bmi >= 30.0)
    cout << "obese\n";
  else if (bmi >= 25.0)
    cout << "overweight\n";
  else if (bmi >= 18.5)
    cout << "normal\n";
  else
    cout << "underweight\n";

  // atm machine
  cout << "enter your 4-digit PIN number\n";
  double balance = numeric_limits<double>::max();
  int pin;
  cin >> pin;
  if (pin == 1234) {
    cout << "how much would you like to withdrawl\n";
    double amount;
    cin >> amount;
    if (amount <= 0) {
      cout << "invalid amount\n";
    } else if (amount > balance) {
      cout << "insufficient funds\n";
    } else {
      balance -= amount;
      cout << "transaction approved\n";
    }
  } else {
    cout << "invalid PIN\n";
  }

  // login system
  cout << "enter your username\n";
  bool active_account = true;
  string username;
  cin >> username;
  if (username == "stevie_ortiz") {
    cout << "enter password\n";
    string password;
    cin >> password;
    if (password == "6969") {
      if (active_account) {
        cout << username << " has successfully logged in\n";
      } else {
        cout << "inactive account\n";
      }
    } else {
      cout << "incorrect password\n";
    }

  } else {
    cout << "incorrect username\n";
  }

  // number to day of the week
  cout << "input a number\n";
  cin >> num;
  switch (num) {
  case 1:
    cout << "Monday\n";
    break;
  case 2:
    cout << "Tuesday\n";
    break;
  case 3:
    cout << "Wednesday\n";
    break;
  case 4:
    cout << "Thursday\n";
    break;
  case 5:
    cout << "Friday\n";
    break;
  case 6:
    cout << "Saturday\n";
    break;
  case 7:
    cout << "Sunday\n";
    break;
  default:
    cout << "invalid day of the week\n";
    break;
  }

  // menu calculator
  cout << "enter a choice for an arithmetic calculator\n";
  cin >> num;
  cout << "enter two integers\n";
  cin >> num1 >> num2;
  switch (num) {
  case 1:
    cout << num1 << " + " << num2 << " = " << num1 + num2 << "\n";
    break;
  case 2:
    cout << num1 << " - " << num2 << " = " << num1 - num2 << "\n";
    break;
  case 3:
    cout << num1 << " * " << num2 << " = " << num1 * num2 << "\n";
    break;
  case 4:
    if (num2 != 0) {
      cout << num1 << " / " << num2 << " = " << num1 / static_cast<double>(num2)
           << "\n";
    } else {
      cout << "divide by zero error, input a nonzero divisor\n";
    }
    break;
  default:
    cout << "invalid option\n";
    break;
  }

  // vending machine
  cout << "enter a choice for the vending machine";
  cin >> num;
  int const water_price = 1;
  double const soda_price = 1.5;
  double const coffee_price = 2.5;
  double const juice_price = 1.5;
  switch (num) {
  case 1:
    cout << "water costs " << water_price;
    break;
  case 2:
    cout << "soda costs " << soda_price;
    break;
  case 3:
    cout << "coffee costs " << coffee_price;
    break;
  case 4:
    cout << "juice costs " << juice_price;
    break;
  default:
    cout << "invalid choice\n";
    break;
  }

  // traffic light system
  cout << "enter a character for a traffic light\n";
  char traffic_light;
  cin >> traffic_light;
  switch (traffic_light) {
  case 'g':
    cout << "go\n";
    break;
  case 'y':
    cout << "slow down\n";
    break;
  case 'r':
    cout << "stop\n";
    break;
  default:
    cout << "invalid color\n";
    break;
  }

  // grade description
  cout << "enter a letter grade\n";
  char letter_grade;
  cin >> letter_grade;
  switch (letter_grade) {
  case 'A':
    cout << "excellent\n";
    break;
  case 'B':
    cout << "good\n";
    break;
  case 'C':
    cout << "average\n";
    break;
  case 'D':
    cout << "need improvement\n";
    break;
  case 'F':
    cout << "fail\n";
    break;
  default:
    cout << "invalid letter grade\n";
    break;
  }

  // months day calculator
  cout << "enter a choice for month day calculator\n";
  int month;
  cin >> month;
  switch (month) {
  case 2: {
    cout << "is it a leap year, input 1 for true or 0 for false\n";
    bool leap_year;
    cin >> leap_year;
    if (!leap_year)
      cout << "28 days\n";
    else
      cout << "29 days\n";
    break;
  }
  case 4:
  case 6:
  case 9:
  case 11:
    cout << "30 days\n";
    break;
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    cout << "31 days\n";
    break;
  default:
    cout << "invalid month\n";
    break;
  }

  // employee role system
  cout << "enter a choice for the employee role system\n";
  cin >> num;
  switch (num) {
  case 1:
    cout << "employee\n";
    cout << "build software, access repositories\n";
    break;
  case 2:
    cout << "manager\n";
    cout << "view reports, approve budgets\n";
    break;
  case 3:
    cout << "intern\n";
    cout << "read documentation, read code reviews\n";
    break;
  case 4:
    cout << "administrator\n";
    cout << "full system access, manage users\n";
    break;
  default:
    cout << "invalid employee\n";
    break;
  }
  // shape area calculator
  cout << "enter a choice for the shape area calculator";
  cin >> num;
  switch (num) {
  case 1: {
    cout << "enter the radius of the circle\n";
    double radius;
    cin >> radius;
    const double pi = std::acos(-1.0);
    cout << "the area of the circle is " << pi * radius * radius << "\n";
    break;
  }
  case 2: {
    cout << "enter the height and base of the triangle\n";
    double height, base;
    cin >> height >> base;
    cout << "the area of the triangle is " << 0.5 * height * base << "\n";
    break;
  }
  case 3: {
    cout << "enter length and width of the rectangle\n";
    double length, width;
    cin >> length >> width;
    cout << "the area of the rectangle is " << length * width << "\n";
    break;
  }
  default:
    cout << "invalid choice\n";
    break;
  }

  // game character selection
  cout << "enter character for game character menu\n";
  cin >> num;
  switch (num) {
  case 1: {
    cout << "you are the warrior, which mode would you like\n";
    int mode;
    cin >> mode;
    switch (mode) {
    case 1:
      cout << "you have chosen the easy mode\n";
      break;
    case 2:
      cout << "you have chosen the hard mode\n";
      break;
    }
    break;
  }
  case 2: {
    cout << "you are the mage, which mode would you like\n";
    int mode;
    cin >> mode;
    switch (mode) {
    case 1:
      cout << "you have chosen the easy mode\n";
      break;
    case 2:
      cout << "you have chosen the hard mode\n";
      break;
    }
    break;
  }
  default:
    cout << "invalid character\n";
    break;
  }
  return 0;
}