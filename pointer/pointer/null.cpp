#include <iostream>
using namespace std;
int main() {
  int *p = nullptr;
  int x = 10;
  p = &x;

  if (p == nullptr) {
    cout << "ptr was not assigned";
  } else {
    cout << "ptr was assigned";
  }
  cout << "\n" << *p;
  return 0;
}
