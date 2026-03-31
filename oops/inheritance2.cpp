#include "iostream"
#include "string"
using namespace std;



class student{
public:
	void info(){
		string name="aditya";
		cout<<"name : "<<name<<"\n";
		int roll_no=1;
		cout<<"Roll No :"<<roll_no<<"\n";
	}
};


class identity:public student{
public:
	void identification(){
         int age=21;
         cout<<"AGE :"<<age<<"\n";

	}

};


int main(){
   student stda;
   identity id;

   stda.info();
   id.identification();



	return 0;
}