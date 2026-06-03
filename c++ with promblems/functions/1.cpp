#include <iostream>
using namespace std;

void max(int a, int b) {
  if (a > b) {
    cout << a;
  } else {
    cout << b;
  }
}

int main() {

  max(10, 25);

  return 0;
}
