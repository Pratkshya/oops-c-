/* Default consturctpr = no parameters
#include <iostream>
using namespace std;

class A {
 int a,b,c;
 public:
 A()
 {
    a = 1;
    b = 3;
    c = a + b;
    
 }
 void show()
 {
    cout<<"The sum is: " <<c;
 }
};
int main()
{
    A obj;
    obj.show();
    return 0;
}

//Parameterized constructor
#include <iostream>
using namespace std;

class A
{
    int m,n;
     
    public:
    A(int a , int b)
    {
        m = a;
        n = b;
        
    }
    void show()
    {
        cout << "The numbers are: " <<m <<"and" << n;

    }

};
int main()
{
    A obj(1,2);
    obj.show();
    return 0;
}


//Copy constructor
#include <iostream>
using namespace std;

class A{
    int a,b;
    public:
    A (int x, int y)
    {
        a = x;
        b = y;
    }

    A (A &ref)
    {
        a = ref.a;
        b = ref.b;

    }

    void show()
    {
        cout << a <<" " << b <<endl;
    }

};
int main()
{
    A obj(11,22);
    obj.show();
    A obj2 = obj;
    obj2.show();


    return 0;
}
*/

#include <iostream>
using namespace std;

class MyClass {
private:
    // Private copy constructor
    MyClass(const MyClass& other) {
        cout << "Copy constructor called." << endl;
    }

public:
    MyClass() {
        cout << "Default constructor called." << endl;
    }
};

int main() {
    MyClass obj1;
    //MyClass obj2(obj1);  // This line will cause a compile error since the copy constructor is private
    return 0;
}

