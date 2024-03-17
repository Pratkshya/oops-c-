#include <iostream>
using namespace std;

class MyClass {
public:
    static int count; // Declaration of static data member

    MyClass() {
        count++; // Increment count each time a new object is created
    }
};

int MyClass::count = 0; // Initialization of static data member

int main() {
    //cout << "Initial count: " << MyClass::count << endl;

    MyClass obj1;
    MyClass obj2;

    cout << "Count after creating two objects: " << MyClass::count << endl;

    return 0;
}
