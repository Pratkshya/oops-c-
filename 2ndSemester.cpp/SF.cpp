#include <iostream>
using namespace std;

class MyClass {
private:
    static int count; // Static data member
public:
    static void displayCount() { // Static member function
        cout << "Total objects created: " << count << endl;
    }
    MyClass() {
        count++; // Increment count each time an object is created
    }
};

int MyClass::count = 0; // Definition of static data member

int main() {
    MyClass obj1, obj2, obj3;
    MyClass::displayCount(); // Calling static function using scope resolution operator
    return 0;
}
