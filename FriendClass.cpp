#include <iostream>
using namespace std;

class A 
{
    private:
    int a = 12;
    int b = 13;

    public:
    void show()
    {
        cout << a << " " << b <<endl;
    }
    friend class B;

};

class B
{
    public:
    void add( A ref) //reference of A to access the private member funtion into class B.khai
    {
        int add = ref.a + ref.b;
        cout <<"The sum is: " << add <<endl;
    }

};

int main()
{
    A obj1;
    B obj2;
    obj1.show(); //function call.
    obj2.add(obj1); //reference of class A.

}