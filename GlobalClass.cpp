#include <iostream>
using namespace std;

class money
{
protected:   //To access data from a class which it has inheritant
  int a,b;
  public:
  void loan()
  {
    cout<<"Enter the amount for two people :Rs. ";
    cin >> a >> b;
  }

  void display()
  {
    cout <<"The amount for two people is: "<<"Rs. "<<a << " and" <<" Rs. "<<b <<endl;

  }


};

class extra : public money
{
 public:
 void again()
 {
    cout <<"The amount for two people is: "<<"Rs. "<<a << " and" <<" Rs. "<<b <<endl;
 }


};

int main()
{
  //money obj1; //Creating an object to access data of memeber function
  extra obj2;  //Calling function from obj2
  obj2.loan(); //Function call
  obj2.display();
  obj2.again();


 return 0;
}