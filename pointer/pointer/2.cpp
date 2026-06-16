#include <iostream>
using namespace std;

void add(int *p, int *pp) { cout << *p + *pp; }
int arr(int *arry, int size) {
  int sum = 0;

  for (int i = 0; i < size; i++) {
    sum += *(arry + i);
  }

  return sum;
}

int main() {
  int a, b, c, d, e;
  a = 2;
  b = 22;
  int num[] = {1, 2, 4, 5, 6, 6};

  add(&a, &b);
  int size = sizeof(num) / sizeof(num[0]);
  cout << "\n" << arr(num, size);

  return 0;
}
