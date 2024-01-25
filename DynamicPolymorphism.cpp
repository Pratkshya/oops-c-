// Run Time Polymorphism or Dynamic Polymorphism
#include <iostream>
using namespace std;
class A
{
    public:
    virtual void show()  //Over-rides the function of class A.
    {
        cout << "This is class A";
    }
};    
    class B : public A //Inheriting the memeber of class A t0 class B.
    {
        public:
        void show()
        {
            cout << "This is class B" <<endl;
        }

    };
    
int main()
{
    A *ptr; B obj; //Pointer
    ptr = &obj;
    ptr -> show(); // " -> " = used to call the function member.
    return 0;
}