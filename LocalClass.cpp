#include <iostream>
using namespace std;

void data(){
    class input //local class
    {
       int a,b;

       public:
       void p()
       {
        cout<<"Enter any two numbers: "<<endl;
       cin >>a>>b;
       cout <<a<<" "<<b;
       }
    };
    input anyvariable;
    anyvariable.p();
    
}
int main()
{
    data(); //Function call
    return 0;
}