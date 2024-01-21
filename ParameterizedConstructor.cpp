//To show the data of a student
#include <iostream>
using namespace std;
class Data
{
  private:
   string name;
   long long phone_no; //long long is same as int but it holds the larger value
   string address;

  public:
  Data( string n, long long pn, string addr) //Parameterized Constructor
  {
    name = n;
    phone_no = pn;
    address = addr;
    
  }
 void show()
  {
    cout <<"The student's details are.... "<<endl;
    cout <<"Name --> " << name <<endl;;
    cout <<"Phone Number --> " << phone_no <<endl;
    cout << "Address --> "<< address <<endl;

   }
};
int main()
{
    Data obj ("Pratikshya Parajuli",9800000000LL, "Itahari - 06"); // Appeding LL is to make sure the value is very large and to avoid the overflow issue.
    obj.show();
    
    return 0;
}