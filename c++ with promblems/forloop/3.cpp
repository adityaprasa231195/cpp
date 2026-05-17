#include<iostream>
using namespace std;
int main(){

int i;
int n;
int sum=0;
cout<<"enter the natural addition till natural number you want ";
cin >>n;
for(i=1;i<=n;i++){
  sum = sum+i;
}
cout<<"sum ="<<sum;



    return 0;
}