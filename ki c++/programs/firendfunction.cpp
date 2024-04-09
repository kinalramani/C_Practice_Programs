// #include <iostream>
// using namespace std;

// class student
// {
// private:
//     int a;

//     friend void show(student &s);
// };
// // void show(student &s1)
// // {
// //     s1.a = 66;
// //     cout << s1.a;
// // }

// void show(int b)
// {
//     cout << b;
// }

// int main()
// {
//     student s;
//     show(s);
//     show(87);

//     return 0;
// }

#include <iostream>
using namespace std;

class Student
{
private:
    char name[100];
    int marks;
    char a;

    friend void show(Student &s);
};
void show(Student &s)
{
    cout << "Enter your name:";
    cin >> s.name;
    int sum = 0, ave;
    cout << "Enter your marks:";
    cin >> s.marks;
    cout << "Enter your marks:";
    cin >> s.marks;
    cout << "Enter your marks:";
    cin >> s.marks;
    cout << "Enter your marks:";
    cin >> s.marks;
    cout << "Enter your marks:";
    cin >> s.marks;
    sum = sum + s.marks;

    ave = sum / 100 * 500;

    // cout << "Enter your marks:";
    // cin >> s.marks;
    ave = s.a;

    switch (ave / 10)
    {
    case 10:
        s.a = 'A';
        break;

    case 9:
        s.a = 'B';
        break;

    case 8:
        s.a = 'C';
        break;

    case 7:
        s.a = 'D';
        break;

    case 6:
        s.a = 'E';
        break;

    case 5:
        s.a = 'E';
        break;

    default:
        s.a = 'f';
    }
    cout << "your grade is" << s.a;
}
int main()
{
    Student s;
    show(s);

    return 0;
}
