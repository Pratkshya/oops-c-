//Non member function operator overloading

#include <iostream>
using namespace std;

class complex{
    int real; int img;
    public:
    complex(int r, int im) : real(r), img(im){}

    int getreal()
    {
        return real;
    }

    int getimg()
    { 
        
        return img;
    }

};

    complex operator + (complex&  c1, complex&  c2 )
    {
        int realsum = c1.getreal() + c2.getreal();
        int imgsum = c1.getimg() + c2.getimg();

        return complex(realsum,imgsum);
    }

int main()
{
    complex c1(2, 3);
    complex c2(3,5);

    complex sum = c1 + c2;
    cout <<"Sum :" << sum.getreal() << "+" <<sum.getimg() <<"i" <<endl;
    return 0;

}