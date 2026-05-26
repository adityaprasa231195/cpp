#include <iostream>
using namespace std;
int main() {

  int arr[6] = {3, -5, 8, -1, 0, -9};
  for (int i = 0; i < 6; i++) {
    if (arr[i] < 0) {
      arr[i] = 0;
    }
  }

  for (int i = 0; i < 6; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}
