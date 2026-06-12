#include <iostream>
using namespace std;

class Location {
private:
  int distance;
  string place;

public:
  int setDistance(int *d) {
    distance = *d;
    return distance;
  }

  int getDistance() { return distance; }
};

int main() {
  Location location;
  int value = 200;
  location.setDistance(&value);
  cout << location.getDistance();

  return 0;
}
