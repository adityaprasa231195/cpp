#include <iostream>
using namespace std;

int main() {

  int arr[3][4] = {{1, 2, 3, 4}, {4, 3, 2, 1}, {5, 6, 7, 8}};
  for (int *p = &arr[0][0]; p <= &arr[2][3]; p++) {
    cout << *p;
  }
  int *p = &arr[0][0];
  cout << "\n" << *(p + 10) << "\n";
  int arr1[4] = {1, 2, 3, 4};
  int *pot = &arr1[0];
  cout << *pot + 1;

  return 0;
}
