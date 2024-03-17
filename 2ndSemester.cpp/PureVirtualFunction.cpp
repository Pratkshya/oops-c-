#include <iostream>
using namespace std;

class base
{
    public:
    virtual void show() = 0;

};

class derive1 : public base
{
    public:
    void show()
    {
        cout <<"Derive 1" <<endl;
    }

};

class derive2 : public base
{
    public:
    void show()
    {
        cout <<"Derive 2" <<endl;
    }

};
int main()
{
    derive1 obj1;
    derive2 obj2;

    base *p;
    p = &obj1;
    p -> show();

    p = &obj2;
    p -> show();

    return 0;

}