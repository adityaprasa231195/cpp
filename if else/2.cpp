#include <iostream>
using namespace std;
int main() {

  int age;
  cout << "enter your age ";
  cin >> age;

  int income;
  cout << "enter monthly income ";
  cin >> income;

  if (age > 18 && age < 40) {
    if (income < 15000)
      cout << "Eligible for scheme";
  }else{
      cout << "Not eligible for scheme";
  }

  return 0;
}
