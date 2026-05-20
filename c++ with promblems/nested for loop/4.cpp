#include <iostream>
using namespace std;

int main() {

  for (int i = 1; i <= 4; i++) {

    for (int j = i + 1; j <= 4; j++) {

      cout << i << " shakes with " << j << endl;
    }
  }

  return 0;
}
