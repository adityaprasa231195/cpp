#include <iostream>
#include <string>
using namespace std;

void greetUser() {
  string name;
  cout << "enter the name ";
  cin >> name;
  cout << "\n" << "Hello, " << name << "! " << "Welcome!";
}

int main() {
  greetUser();
  return 0;
}
