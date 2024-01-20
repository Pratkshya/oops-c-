#include<iostream>
using namespace std;
class data
{
    int id;
    string name;
    int phoneno;
    string address;

    public:
    data() //Default constructor
    {
        cout <<"Default constructor called." <<endl;
    }
    void input()
    {
        cout<<"Enter your ID number --> " <<endl;
        cin >> id;
        
        cin.ignore();
        cout<<"Enter your name --> "<<endl;
        getline(cin,name);

        cout <<"Enter your phone number --> " <<endl;
        cin >> phoneno;

        cin.ignore();
        cout <<"Enter your address --> " <<endl;
        cin >> address;

    }
    void show()
    {
        cout <<"Welcome !!!" << name <<". Thankyou for your time. Your registration has been added to our list." <<endl;
    }
};
int main()
{

    data obj;
    obj.input();
    obj.show();
    return 0;
}