#include <iostream>
using namespace std;

class Data_of_a_person
{
  int age;
  void show()
  {
    cout <<"Hi, " << name <<"." <<endl;
  }

  public:
  string name;
  void Setvalue(int a) //To set the value
  {
    age = a;
    cout << "Your age is: "<< age <<endl;
    show();
    
  }

};

int main()
{
    Data_of_a_person obj;
    obj.name = "Pratikshya Parajuli";
    obj.Setvalue(21); //Function call
    return 0;

}
