#include<iostream>
using namespace std;
class data
{
    char id[100];
    string name;
    int phoneno;
    string address;
    char password[100];

    public:
    data() //Default constructor
    {
        cout <<" ..ONLINE REGISTRATION SIGN UP.." <<endl; //Default constructor called.
    }
    void input()
    {
        cout<<"Enter your email --> ";
        cin.getline(id,100);

        cout<<"Enter your password --> ";
        cin.getline(password,100);

        
        cout<<"Enter your name --> ";
        getline(cin,name);

        cout <<"Enter your phone number --> " ;
        cin >> phoneno;

        cin.ignore();
        cout <<"Enter your address --> ";
        cin >> address;

    }
    void show()
    {
        cout <<"\n Welcome !!! " << name <<". Thankyou for your time. You are logged in!!!." <<endl;
    }
};
int main()
{

    data obj;
    obj.input();
    obj.show();
    return 0;
}