#include <iostream>
using namespace std;

class Dog {
  public:
    void bark() {
      cout << "Woof!";
    }
};

int main() {
  Dog myDog;
  myDog.bark();
  return 0;
} 