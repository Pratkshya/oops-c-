#include <iostream>
using namespace std;

class base
{
    public:
    int x = 10;
};

class derive : public base
{
    public:
    int y = x;
    void show ()
    {
        cout << x <<" and " << y;
    }
    
};

int main()
{
    derive obj;
    obj.show();
}