#include <iostream>
using namespace std;

class base1
{
    public:
    int x = 10;
};

class base2
{
    public:
    int y = 3;
    
    
};

class derive : public base1, base2
{
    public:
    int z = 12;
    void show ()
    {
        cout << x <<" and " << z << " and " <<y<<endl;
    }
};
int main()
{
    derive obj;
    obj.show();

    

    return 0;
}