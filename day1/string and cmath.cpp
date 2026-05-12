#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main(){


    int a=22;
    string num = to_string(a);


    string firstName="aditya";
    string lastName="prasad";

    string fullName = firstName.append(lastName);
    cout<<fullName<<"\n";

    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.size()<<"\n";
    cout << "The length of the txt string is: " << txt.length()<<"\n";
    cout << num.size()<<"\n";
    string txt1 =  "We are the so-called \"Vikings\" from the north.";
    cout << txt1;



    cout << max(10, 20) << endl;
    cout << min(10, 20) << endl;
    cout << sqrt(81) << endl;
    cout << pow(2, 5) << endl;
    cout << round(4.7) << endl;
    cout << abs(-15);



    return 0;
}