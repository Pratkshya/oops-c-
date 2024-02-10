#include <iostream>
using namespace std;

inline int fun(int a, int b, int c)
{
    return (a>b)?((a>c)? a:c) : ((b>c)? b:c);
}

int main()
{
    int result = fun(23, 44, 12);
    cout <<"The greatest number is: " << result <<endl;
}