#include <iostream>
using namespace std;

struct student
{
    int rollno;
    char name[100];
    float marks;
};
int main()
{
    struct student s1;
    int i, num;

    cout << "Enter the number of student:";
    cin >> num;
    for (i = 1; i <= num; i++)
    {
        cout << "for rollno";
        cin >> s1.rollno;
        cout << "name";
        cin >> s1.name;
        cout << "marks";
        cin >> s1.marks;
    }

    return 0;
}