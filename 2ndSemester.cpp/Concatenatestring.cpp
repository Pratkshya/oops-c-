#include <iostream>
#include <string>
using namespace std;

class MyString {
private:
    string str;
public:
    MyString(const string& s) : str(s) {}

    MyString operator+(const MyString& other) const {
        return MyString(str + other.str);
    }

    string getString() const {
        return str;
    }
};

int main() {
    cout << "Enter the first string: ";
    string str1;
    getline(cin, str1);

    cout << "Enter the second string: ";
    string str2;
    getline(cin, str2);

    MyString s1(str1);
    MyString s2(str2);
    MyString result = s1 + s2;

    cout << "Concatenated string: " << result.getString() << endl;

    return 0;
}
