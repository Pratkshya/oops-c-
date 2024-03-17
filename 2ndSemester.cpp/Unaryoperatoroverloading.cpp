#include <iostream>
using namespace std;
class A
{
    int x;
    public:
    A (int a) : x(a){}

    A operator -()
    {
        return A(-x);
    }

    int getx()
    {
        return x;
    }
};

int main()
{
    A obj(3);
    A value = -obj;
    cout <<"Original: " << obj.getx()<<endl;
    cout <<"New : " << value.getx()<<endl;
    return 0;
}

