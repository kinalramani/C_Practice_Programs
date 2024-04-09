// #include <iostream>
// using namespace std;

// int main()
// {

//     int i;
//     for (i = 0; i < 6; i++)
//     {
//         if (i == 2);
//         break;
//     }
//     int day;
//     switch (day)
//     {
//     case 1:
//         cout << "monday";
//         break;

//     case 2:
//         cout << "sunday";
//         break;

//     case 3:
//         cout << "friday";
//         break;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    char ch;
    int a, b;
    cout << "Enter the choice:";
    cin >> ch;
    cout << "Enter the value of a & b:";
    cin >> a >> b;

    switch (ch)
    {
    case '+':
        cout << a << b << a + b;
        break;

    default:
        break;
    }

    return 0;
}