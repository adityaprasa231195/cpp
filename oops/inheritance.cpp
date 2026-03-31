#include <iostream>
using namespace std;

class Animal
{
public:
    void sound()
    {
        cout << "Animal makes sound";
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "\nDog barks";
    }
};

int main()
{
    Dog d;

    d.sound();   
    d.bark();    

    return 0;
}