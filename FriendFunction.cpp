#include <iostream>
using namespace std;
class Sadikshya; //Class declared at last.
class Pratikshya
{
    private:
    int money = 200;
    friend void Ozi(Pratikshya, Sadikshya);

};

class Sadikshya
{
    private:
    int money = 300;
    friend void Ozi(Pratikshya, Sadikshya);

};

void Ozi(Pratikshya r1, Sadikshya r2)
{
    
    cout << "Total Money: " << r1.money + r2.money;
}

int main()
{
    Pratikshya obj1;
    Sadikshya obj2;
    Ozi(obj1, obj2);
}