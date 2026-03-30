#include "iostream"
#include "string"
using namespace std;


class staff{
    public:
    string name;

    private:
    double working_hours;
};



int main(){
    staff print1;
    print1.name="aditya";
    cout<<"name of staff : "<<print1.name<<"\n";
    
    return 0;
}