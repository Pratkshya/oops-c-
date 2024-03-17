#include<iostream>
using namespace std;

class p
{
    int a;
    public:
    p (int x) : a(x){}
    int geta()
    {return a;}

};

class q
{
    int b;
    public:
    q (int x) : b(x){}
    int getb()
    {return b;}

    operator class p()
    {
        return b;
    }
};

int main()
{
    q obj(22);
    p obj2 = obj;
    cout <<"Number :"<< obj2.geta();
    return 0;
}