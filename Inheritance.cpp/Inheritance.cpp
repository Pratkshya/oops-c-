#include <iostream>
using namespace std;
class Department{
    protected:
    string name = "Faculty";
    public:
    void clg()
    {
        cout << "Number of faculties available are: " <<endl;
    }

};

class Category1 : Department //Inheriting
{

    string batch1 = "Electronics";
    public :
    void show()
    {
        cout << batch1 << " " << name << endl;
    }

};

class Category2 : Department //Inheriting
{

    string batch2 = "Civil";
    public :
    void disp1()
    {
        cout << batch2 << " " << name << endl;
    }

};

class Category3 : Department //Inheriting
{

    string batch3 = "Architecture";
    public :
    void disp2()
    {
        cout << batch3 << " " << name << endl;
    }

};

class Category4 : Department //Inheriting
{

    string batch4 = "BCT";
    public :
    void disp3()
    {
        cout << batch4 << " " << name << endl;
    }

};


class Category5 : Department //Inheriting
{

    string batch5 = "Mechanical";
    public :
    void disp4()
    {
        cout << batch5 << " " << name << endl;
    }

};


class Category6 : Department //Inheriting
{

    string batch5 = "Agriculture";
    public :
    void disp5()
    {
        cout << batch5 << " " << name << endl;
    }

};


int main()
{
    Department d1; //Object creation 
    d1.clg();     // Function call

    Category1 c1; //Object creation 
    c1.show();   // Function call

    Category2 c2; //Object creation 
    c2.disp1();  // Function call

    Category3 c3;
    c3.disp2();  // Function call

    Category4 c4; //Object creation 
    c4.disp3();  // Function call

    Category5 c5; //Object creation 
    c5.disp4();  // Function call

    Category6 c6; //Object creation 
    c6.disp5();  // Function call

    return 0;
}