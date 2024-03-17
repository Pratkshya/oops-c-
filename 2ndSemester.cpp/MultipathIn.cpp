#include <iostream>
using namespace std;

class Grandparent {
public:
    void display() {
        cout << "Grandparent" << endl;
    }
};

class Parent1 : public Grandparent {
public:
    void display() {
        cout << "Parent 1" << endl;
    }
};

class Parent2 : public Grandparent {
public:
    void display() {
        cout << "Parent 2" << endl;
    }
};

class Child : public Parent1, public Parent2 {
public:
    void show() {
        cout << "Child" << endl;
    }
};

int main() {
    Child obj;
    obj.show();
    obj.Parent1::display(); // Call display() from Parent1
    obj.Parent2::display(); // Call display() from Parent2
    return 0;
}
