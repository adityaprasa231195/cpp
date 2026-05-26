#include <iostream>
#include <iterator>
using namespace std;


int main() {

  int array[] = {1, 2, 3, 4, 56, 6};


  cout<<size(array)<<"\n";

  cout << "size of array is " << sizeof(array) / sizeof(array[0]);

  return 0;
}
