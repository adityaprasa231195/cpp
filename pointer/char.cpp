
#include <iostream>
using namespace std;
void cha(char *c) {
  while (*c != '\0') {
    cout << *c;
    c++;
  }
}
int main() {
  char c[] = "aditya";
  cha(c);
  return 0;
}
