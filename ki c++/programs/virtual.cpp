#include <iostream>
using namespace std;

class Demo
{
public:
    virtual void show()
    {
        cout << "parent class method function" << endl;
    }
    void display()
    {
        cout << "parent class method function" << endl;
    }
};
class Test : public Demo
{
public:
    void show()
    {
        cout << "child class method function<<" << endl;
    }
    void display()
    {
        cout << "child class method function" << endl;
    }
};

int main()
{

    Demo *d;
    Test t;
    d = &t;
    d->show();
    d->display();
    t.show();

    return 0;
}