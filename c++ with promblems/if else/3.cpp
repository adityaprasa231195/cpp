#include <iostream>
using namespace std;
int main() {

  int number1;
  cout << "enter number1 ";
  cin >> number1;
  int number2;
  cout << "enter number2 ";
  cin >> number2;
  char op;
  cout << "choose operator (+, -, *, /) ";
  cin >> op;

  if (op == '+') {
    cout << number1 + number2;
  } else if (op == '-') {
    cout << number1 - number2;
  } else if (op == '*') {
    cout << number1 * number2;
  } else if (op == '/') {

    if (number2 == 0) {
      cout << "Division by zero is not allowed!";
    } else {
      cout << "Result = " << number1 / number2;
    }

  } else {
    cout << "Invalid operator!";
  }

  return 0;
}
