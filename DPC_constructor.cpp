#include <iostream>
using namespace std;
class Data
{
    int a,b;
    public:
    Data() //Default Constructor
    {
        cout << "Enter two values: ";
        cin >> a >> b;
        cout <<"The two numbers are: " << a << " " <<b <<endl;
    }

    Data(int x,int y) //Parameterized Constrctor
    {
        a = x;
        b = y;
        cout <<"The two numbers are: " << a << " " <<b <<endl;
    }

    Data (Data &ref) //Copy Constructor
    {
        a = ref.a;
        b = ref.b;
        cout <<"The two numbers are: " << a << " " <<b <<endl
        ;
    }

};
int main()
{
  Data obj;          //Initializing object for Default Constructor
  Data obj1(5,60);  //Initializing object for Parameterized Constructor
  Data obj3(obj1);  // Coping the content of Parameterized Constructor to Copy Constructor
}