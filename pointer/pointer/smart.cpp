#include <iostream>
#include <memory>
using namespace std;

class name {
public:
  int age;
  string nam;
  int roll;

  name() {}

  name(int a, string b) {
    age = a;
    nam = b;
  }

  name(int a, string b, int c) {
    age = a;
    nam = b;
    roll = c;
  }
};

int main() {

  name NAME;

  // unique_ptr holding an integer
  unique_ptr<int> x = make_unique<int>(22);
  cout << "\nValue in x: " << *x;

  unique_ptr<int> y = std::move(x);
  cout << "\nValue in y: " << *y;

  {
    // unique_ptr managing a class object
    unique_ptr<name> poinclass = make_unique<name>(22, "adi");

    cout << "\n\nUnique Pointer Details";
    cout << "\nName: " << poinclass->nam;
    cout << "\nAge: " << poinclass->age;
  }

  {
    // shared_ptr managing a class object

    shared_ptr<name> shrclass = make_shared<name>(22, "aditya");
    shared_ptr<name> shrclass1 = make_shared<name>(22, "adi", 231195);
    shared_ptr<name> shrclass2 = shrclass1;
    cout << "\n\nShared Pointer Details";
    cout << "\nName: " << shrclass->nam;
    cout << "\nAge: " << shrclass->age;
    cout << "\nName: " << shrclass1->nam;
    cout << "\nAge: " << shrclass2->age;
    cout << "\nName: " << shrclass2->nam;
    cout << "\nAge: " << shrclass1->age;
    cout << "\nroll: " << shrclass1->roll;
    cout << "\nroll: " << shrclass2->roll;
    cout << "\nUse Count: " << shrclass1.use_count();
  }
  cout << endl;
  {
    int var = 110;
    cout << "\n" << var << "\n";
  }

  {

    // Initialize weak pointer 1st way
    shared_ptr<int> weakref = make_shared<int>(200);
    weak_ptr<int> shareref = weakref;

    if (auto temp = shareref.lock()) {
      std::cout << *temp << std::endl;
    }
    
  }

  return 0;
}
