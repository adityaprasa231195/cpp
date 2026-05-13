#include <iostream>
using namespace std;

int main() {

  int number;
  cout << "enter number ";
  cin >> number;

  if (number < 0) {
    cout << "negative";
  } else if (number > 0) {
    cout << "postive";
  } else {
    cout << "zero";
  }

  return 0;
}
