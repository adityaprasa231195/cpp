#include <iostream>
using namespace std;

int SumofElements(int r[], int size) {
  int i, sum = 0;
  for (i = 0; i < size; i++) {
    sum += r[i];
  }
  return sum;
}

int var(int *c) { return *c + 1; }

int main() {
  int b = 22;
  int *ptra;

  int &a = b;
  ptra = &a;

  cout << *ptra << "\n" << *ptra + 2 << "\n";
  cout << sizeof(b);

  int **q = &ptra;
  cout << "\n" << **q;

  int c = 10;
  cout << "\n" << var(&c);

  int d;
  cout << "\n" << &d << "\n";

  int arr[] = {1, 2, 3, 45, 4};
  int size = sizeof(arr) / sizeof(arr[0]);
  for (int i = 0; i < size; i++) {
    cout << *(arr + i) << " ";
  }

  int *arrptr = &arr[0];
  cout << "\n" << *(arrptr) << "\n" << *(arrptr + 1) << "\n";

  int r[] = {1, 2, 4, 5, 6, 67, 2, 2};
  int r_size = sizeof(r) / sizeof(r[0]);
  cout << "Sum: " << SumofElements(r, r_size) << endl;

  return 0;
}
