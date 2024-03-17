#include <iostream>
using namespace std;

class A
{
    int n ;
    public:
    void setn(int a)
    {
        n =  a;
    }

    int getn()
    {
        return n;
    }
};

int main()
{
    A obj;
    obj.setn(23);
    int value = obj.getn(); // Call getn() and store its return value
    cout << "Value of n: " << value << endl; // Output the value of n
    return 0;
}