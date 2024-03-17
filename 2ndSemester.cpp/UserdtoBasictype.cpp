#include <iostream>
using namespace std;

class p
{
    int a;
    public:
    p (int x) : a(x) {};

    operator int()
    {
        return a;
    }
};

int main()
{
    p obj(23);
    int val = obj;
    cout<<"Value: " << val;
    return 0;
}