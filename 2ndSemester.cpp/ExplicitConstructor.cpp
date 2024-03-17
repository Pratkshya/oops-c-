#include <iostream>
using namespace std;

class MyClass {
    int value;
public:
    // Constructor with a single integer parameter
    explicit MyClass(int val) : value(val) {}

    // Getter function to retrieve the value
    int getValue() const { return value; }
};

int main() {
    //MyClass obj = 42; // Error: Implicit conversion not allowed
    MyClass obj(42); // This is allowed

    cout << "Value: " << obj.getValue() << endl;

    return 0;
}
