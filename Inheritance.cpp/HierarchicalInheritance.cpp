#include <iostream>
using namespace std;
class base
{
    protected:
    int a,b,c;
    public:
    void input1()
    {
        cout << "Enter the value for a and b : ";
        cin >> a >> b;
    
    }
    void show1()
    {
        c = a + b;
        cout << "The sum is: " << c <<endl;
    }

};
class derive1 : public base
{
    protected:
    int n1;
    public:
    void input2()
    {
        cout << "Enter the value for derive1 class : ";
        cin >> n1;
    
    }
    void show2()
    {
        cout << "N1 > " << n1 <<endl;
    }

};
class derive2 : public base
{
    protected:
    int n2;
    public:
    void input3()
    {
        cout << "Enter the value for derive2 class : ";
        cin >> n2;
    
    }
    void show3()
    {
        cout <<"N2 > " <<n2 <<endl;
        
    }

};
int main()
{
    derive1 obj;
    obj.input1();
    obj.show1();

    obj.input2();
    obj.show2();

    derive2 obj2;
    obj2.input3();
    obj2.show3();
    

    return 0;
}
