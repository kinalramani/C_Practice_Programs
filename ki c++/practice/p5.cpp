#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    string name1;

    friend class Test;
};

class Test
{
public:
    void show(Student &obj)
    {
        obj.name = "kinal";
        obj.name = obj.name1;

        cout << obj.name;
        cout << obj.name1;
    }
};

int main()
{
    Student s;
    Test t;
    t.show(s);

    return 0;
}
