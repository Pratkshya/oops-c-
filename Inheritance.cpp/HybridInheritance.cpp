#include <iostream>
using namespace std;

class A
{
    int a;
    public:
    void input()
    {
        cout << "Enter any number : ";
        cin >> a;
    }
    void show()
    {
        cout << "The number you entered is > " << a <<endl;
    }
    
};

class B : virtual public A
{

};

class C : virtual public A
{
    
};

class D : public B, public C
{
    
};

int main()
{
    A obj; B obj2; C obj3; D obj4;

    obj.input();
    obj.show();

    obj2.input();
    obj2.show();

    obj3.input();
    obj3.show();

    obj4.input();
    obj4.show();
    return 0;
}