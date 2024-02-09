#include <iostream>
using namespace std;
class A 
{
    public:
    void input()
    {
        cout << "Pratikshya Parajuli.";
    }

};

class B : public A 
{
    public:
    void input()
    {
        cout << "Sadikshya Parajuli.";
    }


};

int main()
{
    /*B obj;
    obj.A :: input();
    obj.input(); 
    
        OR */

    A *ptr;
    B obj;
    ptr = &obj;
    ptr -> input();

    return 0;
}