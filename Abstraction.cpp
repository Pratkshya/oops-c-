 #include <iostream>
 using namespace std;
 
 class Car
 {
    bool StartEngine;
    public :
    void start()
    {
        StartEngine = true;
        cout << "Loading..." <<endl;
        cout << "Engine Started" <<endl;
    }

    void drive ()
    {
        if (StartEngine)
        {
            cout << "You are ready to drive." <<endl;
        }

        else
        {
            cout << "Can't drive the car."<<endl;
        }
    }

 };
 
 int main ()
 {
    Car obj;
    obj.start();
    obj.drive();
    return 0;
 }