#include <iostream>
using namespace std;
class data{
  
  int age;
  char name[100];
  string address;
  int phone_no;

public:
void input(){
  cin.ignore();
  
  cout <<"Enter your Age: ";
  cin >> age;
   
   cin.ignore();

   cout <<"Enter your Name: ";
   cin.getline(name, 100);
   
   cout <<"Enter your Address: ";
   getline(cin,address);
   
   cout <<"Enter your Phone Number: ";
   cin >> phone_no;

}

void show(){
  cout <<"Age: " << age <<endl;
  cout <<"Name: " <<name<<endl;
  cout <<"Address: " <<address<<endl;
  cout <<"Phone Number: " <<phone_no<<endl;

}

};


int main()
{
    
  /*For a single input
  class data a;
  a.input();
  a.show();
  */

 //For multiple inputs
 data a,b,c;

 a.input();
 a.show();

 b.input();
 b.show();

 c.input();
 c.show();

return 0;
}