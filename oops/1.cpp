#include <iostream>
using namespace std;

class MyClass {
public:
  void myFunction() { cout << "Some content in parent class."; }
};

class MyOtherClass {
public:
  void myOtherFunction() { cout << "Some content in another class."; }
};

class MyChildClass : public MyClass, public MyOtherClass {};

class Location {
private:
  int distance;
  string place;

public:
  int setDistance(int *d) {
    distance = *d;

    return distance;
  }

  int getDistance() { return distance; }
};

class Km : public Location {};
int main() {
  Location location;
  Km km;
  int value = 200;
  location.setDistance(&value);
  cout << location.getDistance();
  int valuek = 500;
  km.setDistance(&valuek);
  cout << km.getDistance();
  MyChildClass myObj;
  myObj.myFunction();
  myObj.myOtherFunction();

  return 0;
}
