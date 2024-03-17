#include <iostream>
using namespace std;

class base
{
    public :
    int x = 1;
    void show()
    {
        cout <<  "Number is : " << x <<endl;
    }
};

class derive1 : virtual public  base
{
    
};

class derive2 : public base
{

};
int main ()
{
    base obj;
    obj.show();

    derive1 obj2;
    obj2.show();

    derive2 obj3;
    obj3.show();
}