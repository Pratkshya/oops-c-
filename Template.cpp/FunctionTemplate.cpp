#include <iostream>
using namespace std;

template <class T>
void show(T a, T b) //Funtion Template
{
    cout << "A = " << a <<" and " << "B = " << b <<endl;
}

int main()
{
    int x = 21;
    int y = 32;
    show(x,y);

    string m = "e", n = "d";
    show(m,n);

    float p = 10.5, q = 16.8;
    show(p,q);
    return 0;
}
