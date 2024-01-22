//To copy the  value from one constructor to another.
#include <iostream>
using namespace std;
class Data
{
    int a,b; //Initializing variables
    
    public:
    Data(int x, int y) //Parameterized constructor
    {
        a = x;
        b = y;
    }
    Data(Data &ref) //Copy constructor
    {
        a = ref.a;
        b = ref.b;

    }

    void show()
    {
        cout << a <<" " << b <<endl;
    }

};
int main ()
{ 
    Data obj(4,9);
    Data obj2 = obj; //Initializes object into another constructor
    obj2.show();
    obj.show();

    return 0;
}