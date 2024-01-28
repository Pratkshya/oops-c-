#include <iostream>
using namespace std;

class base
{
    private:
    int a,b;
    public:
    void input()
    {
        cout <<"Enter any two numbers: ";
        cin >> a >> b;
    }

    void disp()
    {
        cout << "The two values are : " << a <<" and " << b <<endl;
    }

};

class derive : public base
{
    int m,n;
    public:
    void data()
    {
        cout <<"Enter any two numbers: ";
        cin >> m >> n;
    }
    
    void disp1()
    {
        cout << "The two values are : " << m <<" and " << n <<endl;
    }

};

int main()
{
    base b;
    b.input();
    b.disp();

    derive d;
    d.data();
    d.disp1();
    
    return 0;
}