#include <iostream>
using namespace std;

// Base class
class A {
public:
    virtual void input() {
        cout << "A.";
    }
};

// Derived class
class B : public A {
public:
    void input() override {
        cout << "B";
    }
};

int main() {
    A *ptr;
    B obj;
    ptr = &obj;
    ptr->input(); // Calls the input() method of the derived class

    return 0;
}
