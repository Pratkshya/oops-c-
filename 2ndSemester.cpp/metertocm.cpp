#include <iostream>
using namespace std;

class con
{
    int meter = 2;
    public:
    con(int m) : meter(m){}

    void cal()
    {
        int centim = meter * 100;
        cout <<"Result is: " << centim;

    }

};
int main ()
{
    con obj(2);
    obj.cal();
    return 0;
    
}