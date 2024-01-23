#include <iostream>
using namespace std;
class Data
{
    int a;
    public:
    Data() // Constructor
    {
        cout << "Enter the value of a : ";
        cin >> a;
        cout <<"The value of a is: " << a <<endl;
    }
    ~Data() //Destructor
    {
        cout << "Object Destroyed!!";
    }

};
int main ()
{
    Data obj;
    return 0;
}