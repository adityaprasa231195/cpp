#include <iostream>
using namespace std;

template <typename C, typename N> class dog {
public:
  C age;
  N name;
};

int add(int a, int b) { return a + b; }

float addf(float a, float b) { return a + b; }

template <typename X> X addfun(X a, X b) { return a + b; }
template <typename Y> Y addfun1(Y *a, Y *b) { return *a + *b; }

int main() {

  dog<int, string> Doggy;

  cout << add(4, 5) << "\n";
  cout << addf(4.6, 5.6) << "\n";
  float c = 44.6;
  float d = 45.6;
  cout << addfun1(&c, &d);

  Doggy.age = 22;
  ;
  Doggy.name = "wolly";

  return 0;
}
