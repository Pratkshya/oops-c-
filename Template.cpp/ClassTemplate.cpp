#include <iostream>
using namespace std;
template <class T>
class display
{
    T a, b;
    public:
    display(T m, T n)
    {
        a = m;
        b = n;
    
    }
    void show()
    {
        cout <<"A = " << a <<" and " << "B = " << b <<endl;
    }


};

int main()
{
    display <int> obj(23,44);
    obj.show();
    return 0;
}