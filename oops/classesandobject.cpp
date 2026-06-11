#include <iostream>
using namespace std;

class Student {
public:
  int age;
  string name;
  double gpa;

  Student(int ab, string n, double g) {
    age = ab;
    name = n;
    gpa = g;
  }

  void agecal(int *p) {
    if (*p < 18) {
      cout << "can attend class";
    } else {
      cout << "cannot attend class";
    }
  }
};

int main() {

  Student student1(12, "ujju", 9.0);

  cout << "\nStudent Name: " << student1.name << endl;
  cout << "Student Age: " << student1.age << endl;
  cout << "Student GPA: " << student1.gpa << endl;

  cout << "Enter your age: ";
  cin >> student1.age;

  cout << "Enter your name: ";
  cin >> student1.name;

  cout << "Enter your GPA: ";
  cin >> student1.gpa;

  int age = student1.age;

  cout << "\nStudent Name: " << student1.name << endl;
  cout << "Student Age: " << student1.age << endl;
  cout << "Student GPA: " << student1.gpa << endl;

  cout << "Student condition: ";
  student1.agecal(&age);

  return 0;
}
