#include <iostream>
using namespace std;
class base
{
    protected:
    int a;
    public:
    void input1()
    {
        cout << "Enter the value for a : ";
        cin >> a;
    
    }
    void show1()
    {
        cout << a <<endl;
    }

};
class derive1 : public base
{
    protected:
    int b;
    public:
    void input2()
    {
        cout << "Enter the value for b : ";
        cin >> b;
    
    }
    void show2()
    {
        cout << b <<endl;
    }

};
class derive2 : public derive1
{
    int c;
    public:
    void input3()
    {
        cout << "Enter the value for c : ";
        cin >> c;
    
    }
    void show3()
    {
        cout <<"You entered: " <<endl;
        cout << a << "," << b << " and " << c  <<endl;
    }

};
int main()
{
    /*base b_obj;
    b_obj.input1();
    b_obj.show1();*/

    /*derive1 d1_obj;
    d1_obj.input2();
    d1_obj.show2();*/

    derive2 d2_obj;
    d2_obj.input1();
    d2_obj.show1();

    d2_obj.input2();
    d2_obj.show2();

    d2_obj.input3();
    d2_obj.show3();

    return 0;
}
