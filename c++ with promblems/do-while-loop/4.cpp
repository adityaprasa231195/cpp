#include<iostream>
using namespace std;
int main(){

    int pin=1234;
    int i;

    do{
        cout<<"enter pin";
        cin>>i;
    }while(i !=pin);
    cout<<"ACCESS GRANTED";


    return 0;
}