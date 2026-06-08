#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char c[5] = {'j', 'o', 'h', 'n', '\0'};
  cout << c;
  char c1[22] = {'a', 'd', 'i', 't', '\0'};
  cout << "\n" << c1;
  int size = strlen(c1);
  cout << "\n" << size << "\n";
  char d[] = {"aditya"};
  cout << d << "\n";
  char *c2;
  c2 = c1;

  cout << c1 << " " << *(c2 + 1);
  cout << "\n"
       << (void *)&c2[0] << "\n"
       << (void *)&c2[1]; // how to get address
  return 0;
}
