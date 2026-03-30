#include "iostream"
using namespace std;

class student
{
public:
    string name;
    int age;
    double gpa;

    student(string x, int y, double z)
    {
        name = x;
        age = y;
        gpa = z;
    }
};

int main()
{

    student std1("aditya", 20, 4.23);
    student std2("musk", 21, 4.43);
    cout <<"name : " <<std1.name <<"\n";
    cout <<"age : " <<std1.age  <<"\n";
    cout <<"gpa : " <<std1.gpa  <<"\n";

    cout <<"\n";

    cout <<"name : " <<std2.name <<"\n";
    cout <<"age : " <<std2.age  <<"\n";
    cout <<"gpa : " <<std2.gpa  <<"\n";


    

    return 0;
}