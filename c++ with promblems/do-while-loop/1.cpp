#include <iostream>
using namespace std;
int main() {
  int N, sum, i;
  cout << "enter natural number N ";
  cin>>N;
  sum = 0;
  i = 1;

  while (i <= N) {
    sum = sum + i;
    i++;
  }
  cout<<sum;

  return 0;
}
