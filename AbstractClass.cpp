#include <iostream>
using namespace std;

class A 
{
    public:
    virtual void show() = 0;
    void display()
    {
        cout <<"Hi, I'm a base class." <<endl;
    }

};

class B : public A
{
    public:
    void show()
    {
        cout <<"Hi, I'm a derive class." <<endl;
    }

};

int main()
{
    B obj;
    obj.display();
    obj.show();
    return 0;
}