// Compile - time polymorphism
//Function Overloading

#include <iostream>
using namespace std;
class Mathsoperation
{
    public:
    int add(int a, int b)
    {
        return a + b;
    }

    double add (double a, double b) //For decimal number
    {
        return a + b;
    }

};
int main()
{
    Mathsoperation obj;
    cout << obj.add(7,3) <<endl;
    cout << obj.add(5.3,9.7);
    return 0;
}