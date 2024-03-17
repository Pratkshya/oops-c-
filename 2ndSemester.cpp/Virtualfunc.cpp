#include <iostream>
using namespace std;

class polygon
{
public:
    int width, height;

    virtual void set_values(int w, int h)
    {
        width = w;
        height = h;
    }

    virtual int area()
    {
        return 0;
    }
};

class rectangle : public polygon
{
public:
    void set_values(int w, int h) override
    {
        width = w;
        height = h;
    }

    int area() override
    {
        return (width * height);
    }
};

class triangle : public polygon
{
public:
    void set_values(int w, int h) override
    {
        width = w;
        height = h;
    }

    int area() override
    {
        return (width * height / 2);
    }
};

int main()
{
    polygon poly;
    rectangle rec;
    triangle tri;

    polygon *pointer;
    pointer = &rec;
    pointer->set_values(4, 5);
    cout << pointer->area() << endl;

    pointer = &tri;
    pointer->set_values(4, 5);
    cout << pointer->area() << endl;
    return 0;
}
