#include <iostream>
#include <list>
using namespace std;



class yt{
    public:
    string name;
    string username;
    int sub;
    list<string> publisvid;
};

int main(){
   yt objyt;
   objyt. username="aditya123";
   objyt. name="aditya";
   objyt. sub=123;
   objyt. publisvid={"code with me ", "5min code", "code with adi"};


   cout<<"username :"<<objyt. username<<"\n";
   cout<<"videos";
   for(string video:objyt. publisvid)
   {
      cout<<video;
   }
    cout<<"\n";

    system("pause");

    return 0;
}

