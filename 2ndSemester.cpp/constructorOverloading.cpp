#include<iostream>
using namespace std;

class A
{
    int x,y;
    public:
    A()
    {
        x = 0;
        y = 0;
    }

    A(int a)
    {
        x = a;
        y = a;
    }
    void show(){
        cout << x << " " << y<<endl;
    }


};
int main()
{
    A obj;
    obj.show();
    A obj2(3);
    obj2.show();
    return 0;
}