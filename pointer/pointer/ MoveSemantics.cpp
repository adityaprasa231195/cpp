#include <iostream>
using namespace std;

template <typename X, typename Y> class Animal {
public:
  X name;
  Y age;
};

int main() {
  Animal<string, int> ani;
  ani.name = "lion";
  ani.age = 12;

  cout << ani.name;
  cout << "\n" << ani.age << "\n";
  const int x{10};
  cout << x;
  auto y = "aditya";
  cout << "\n" << y;

  return 0;
}
