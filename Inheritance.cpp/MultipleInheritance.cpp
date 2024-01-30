#include <iostream>
using namespace std;
class base1
{
    protected:
    int a,b,c;
    public:
    void input1()
    {
        cout <<"Enter the two values --> ";
        cin >> a >> b;
        c = a + b;
    }
    void show1()
    {
        cout << "The sum is " << c << endl;
    }

};
class base2
{
    protected:
    int a,b,c;
    public:
    void input2()
    {
        cout <<"Enter the two values --> ";
        cin >> a >> b;
        c = a - b;
    }
    void show2()
    {
        cout << "The difference is " << c << endl;
    }

};
class derive : public base1, public base2
{
    int a,b,c;
    public:
    void input3()
    {
        cout <<"Enter the two values --> ";
        cin >> a >> b;
        c = a * b;
    }
    void show3()
    {
        cout << "The product is " << c << endl;
    }

};
int main()
{
    derive obj;
    obj.input3();
    obj.show3();

    obj.input1();
    obj.show1();

    obj.input2();
    obj.show2();


    return 0;
}