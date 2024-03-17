#include <iostream>
using namespace std;

class A
{
    int n = 44;
    public:
    int getn()
    {
        return n;
    }
};

int main()
{
    A obj;
    int value = obj.getn(); // Call getn() and store its return value
    cout << "Value of n: " << value << endl; // Output the value of n
    return 0;
}