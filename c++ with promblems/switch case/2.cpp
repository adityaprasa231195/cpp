#include <iostream>
using namespace std;
int main() {

  int num1;
  cout << "enter number 1 ";
  cin >> num1;
  int num2;
  cout << "enter number 2 ";
  cin >> num2;
  char op;
  cout << "choose operator (+, -, *, /) ";
  cin >> op;

  if (op == '/')

    switch (op) {
    case '+':
      cout << num1 + num2;
      break;
    case '-':
      cout << num2 - num1;
      break;
    case '*':
      cout << num1 * num2;
      break;
    case '/':
      if (num2 == 0) {
        cout << "Math Error: Division by zero!";
      } else {
        cout << "Result = " << num1 / num2;
      }
      break;
    default:
      cout << "Unknown operator!S";
    }

  return 0;
}
