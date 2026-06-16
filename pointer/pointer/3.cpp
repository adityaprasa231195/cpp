#include <iostream>
using namespace std;

int main() {
  char c[] = {'a', 'd', 'i', 't', 'y', 'a', '\0'};
  int size = sizeof(c) / sizeof(c[0]);
  for (int i = 0; i < size; i++) {
    cout << *(c + i);
  }
  cout << "\n" << *c << "\n";

  int arr[4][6];

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 6; j++) {
      cin >> arr[i][j];
    }
  }

  cout << "Array elements:\n";
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 6; j++) {
      cout << arr[i][j] << " ";
    }
    cout << "\n";
  }

  return 0;
}
