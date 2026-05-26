#include <iostream>
using namespace std;
int main() {

  int arr[5] = {12, 35, 1, 10, 34};

  int max1 = arr[0];

  for (int i = 0; i < 5; i++) {
    if (arr[i] > max1) {
      max1 = arr[i];
    }
  }
  cout << "maximum value1 = " << max1 << "\n";
  int max2 = -1;
  for (int j = 0; j < 5; j++) {
    if (arr[j] > max2 && arr[j] < max1) {
      max2 = arr[j];
    }
  }

  cout << "maximum value2 = " << max2;

  return 0;
}
