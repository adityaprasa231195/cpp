#include <iostream>
#include <stdexcept>
using namespace std;

double add(double a, double b) { return a + b; }

double sub(double a, double b) { return a - b; }

double multiply(double a, double b) { return a * b; }

double divide(double a, double b) {
  if (b == 0.0) {
    throw runtime_error("Division by zero");
  }
  return a / b;
}

int main() {
  char op;
  double a, b;

  cout << "Enter operator (+, -, *, /): ";
  cin >> op;

  cout << "Enter number 1: ";
  cin >> a;

  cout << "Enter number 2: ";
  cin >> b;

  try {
    switch (op) {
    case '+':
      cout << "Result = " << add(a, b);
      break;

    case '-':
      cout << "Result = " << sub(a, b);
      break;

    case '*':
      cout << "Result = " << multiply(a, b);
      break;

    case '/':
      cout << "Result = " << divide(a, b);
      break;

    default:
      cout << "Invalid operator";
    }
  } catch (const runtime_error &e) {
    cout << "Error: " << e.what();
  }

  return 0;
}
