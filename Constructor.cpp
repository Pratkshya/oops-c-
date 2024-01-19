#include <iostream>
#include <string>

using namespace std;

class data{
    private:
     string name; //To access name both in constructor and show function
    public:
     data() //Declaring constructor
     {
        
        cout << "Enter your name --> ";
        getline(cin,name);
     }

     void show()
        {
            cout << "Welcome " << name << "!!! How are you today?" << endl;

        }

};
int main()
{
    data obj; //Creating Object of class data
    obj.show(); // Function call

    return 0;
}

/* When you declare "string" inside a constructor, it's only accessable 
with in the constructor as it's a local variable. So, if you try to access it 
outside the show function, it isn't recognized because it's not in the 
same scope. So, we declare "string name" as a memeber variable of the
data class
*/