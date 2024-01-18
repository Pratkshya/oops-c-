// Class inside another class
//To display two numbers

#include <iostream>
using namespace std;

class data1
{
    int x,y;
    public:

    class data2
    {
       public:
       int a,b; //Declaring variable
       
       void input()
       {
        cout <<"Enter two numbers: ";
        cin >> a >> b;
       }
       
       void show()
       {
        cout <<"The two input values are: " << a << " and " << b;
       }
    };
};

int main()
{
    data1 :: data2 obj; // :: = Scope resolution operator
    obj.input(); //Function call
    obj.show();  //Function call
    return 0;

}