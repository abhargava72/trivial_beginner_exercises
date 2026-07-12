// manage the grades of student's input
#include <iostream>
#include <limits>

using std::cin;
using std::cout;

void getGrades(int (&grades)[5]) {
  int value;
  for (int i = 0; i < 5; i++) {
    cout << "Enter grade #" << i + 1 << ": ";
    while (true) {
      if (!(cin >> value)) {
        cout << "please enter an integer value for grade #" << i + 1 << "\n";
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        continue;
      }
      if (value < 0 || value > 100) {
        cout << "please enter an appropriate integer value for grade #" << i + 1
             << "\n";
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        continue;
      }
      break;
    }
    grades[i] = value;
  }
}

int sumOfGrades(int (&grades)[5]) {
  int sum = 0;
  for (int i = 0; i < 5; i++) {
    sum += grades[i];
  }
  return sum;
}

int minimumOfGrades(int (&grades)[5]) {
  int minimum = grades[0];
  for (int i = 0; i < 5; i++) {
    if (grades[i] < minimum) {
      minimum = grades[i];
    }
  }
  return minimum;
}

int maximumOfGrades(int (&grades)[5]) {
  int maximum = grades[0];
  for (int i = 0; i < 5; i++) {
    if (grades[i] > maximum) {
      maximum = grades[i];
    }
  }
  return maximum;
}

int numberOfStudentsPassed(int (&grades)[5]) {
  int number_of_students_passed = 0;
  for (int i = 0; i < 5; i++) {
    if (grades[i] >= 70) {
      number_of_students_passed++;
    }
  }
  return number_of_students_passed;
}

double computeAverage(int sum) { return sum / 5.0; }

void displayOutput(double average, int maximum, int minimum,
                   int number_of_students_passed) {
  cout << "Average: " << average << "\n";
  cout << "Highest: " << maximum << "\n";
  cout << "Lowest: " << minimum << "\n";
  cout << "Students passed: " << number_of_students_passed << "\n";
}

int main() {
  int grades[5];
  getGrades(grades);
  int sum = sumOfGrades(grades);
  int minimum = minimumOfGrades(grades);
  int maximum = maximumOfGrades(grades);
  int number_of_students_passed = numberOfStudentsPassed(grades);
  double average = computeAverage(sum);
  displayOutput(average, maximum, minimum, number_of_students_passed);
  return 0;
}