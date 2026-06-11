#include <iostream>
using namespace std;

int main() {
  int *p = new int;
  *p = 22;
  cout << *p;
  delete p;

  int *q = new int(33);
  cout << "\n" << *q << "\n";
  delete q;

  // safer alloc
  int *s = new int{44};
  cout << *s;
  delete s;

  string *a = new string("aditya");
  cout << "\n" << *a;
  delete a;

  char *b = new char{'a'};
  cout << "\n" << *b;
  delete b;

  int size;

  cin >> size;

  int *arr = new int[size];

  for (int i = 0; i < size; i++) {

    cin >> *(arr + i);
  }

  for (int i = 0; i < size; i++) {

    cout << *(arr + i) << " ";
  }

  delete[] arr;

  return 0;
}
