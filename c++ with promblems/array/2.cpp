#include <iostream>
using namespace std;

int main() {

  int arr[6] = {3, 8, 5, 12, 7, 4};
  int evencount = 0;
  int oddcount = 0;
  for (int i = 0; i < 6; i++) {
    if (arr[i] % 2 == 0) {
      evencount++;
    } else {
      oddcount++;
    }
  }
  cout << "even " << evencount << "\n";
  cout << "odd  " << oddcount;

  return 0;
}