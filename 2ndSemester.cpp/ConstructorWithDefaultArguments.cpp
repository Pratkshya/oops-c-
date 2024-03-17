#include<iostream>
using namespace std;

class A
{
    int a, b;
    public:
    A (int x = 0, int y= 0)
    {
        a = x;
        b = y;
        
    }
    void show()
    {
        cout << a <<" " << b <<endl;
    }
};
int main()
{
    A obj;
    obj.show();
    A obj2(2);
    obj2.show();
    return 0;
}