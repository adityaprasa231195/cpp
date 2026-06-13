#include <iostream>
using namespace std;

class MyClass {
public:
  void myFunction() { cout << "Some content in parent class." << endl; }
};

class MyOtherClass {
public:
  void myOtherFunction() { cout << "Some content in another class." << endl; }
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

class Animal {
public:
  string sound(string sound) { return sound; }
};

class Dog : public Animal {
public:
  string sound(string sound) { return sound; }
};

class Km : public Location {};

int main() {
  Animal ani;
  Dog d;
  Location location;
  Km km;

  int value = 200;
  location.setDistance(&value);
  cout << "Distance in Location: " << location.getDistance() << endl;

  int valuek = 500;
  km.setDistance(&valuek);
  cout << "Distance in Km: " << km.getDistance() << endl;

  MyChildClass myObj;

  cout << "Calling MyClass function:" << endl;
  myObj.myFunction();

  cout << "Calling MyOtherClass function:" << endl;
  myObj.myOtherFunction();

  cout << "Animal sound: " << ani.sound("different sounds") << endl;
  cout << "Dog sound: " << d.sound("bark") << endl;

  return 0;
}
