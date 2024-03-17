#include <iostream>
using namespace std;

class A
{
    int a;
    public:
    A (int x)
    {
        a = x;
    }
    void show()
    {
        cout<<"Show: " <<a;
    }
};

int main()
{
    
    A *ptr = new class A(34);
    ptr -> show();
    delete ptr;

    return 0;
}