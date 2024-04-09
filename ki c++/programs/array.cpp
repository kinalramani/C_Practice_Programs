// #include <iostream>
// using namespace std;

// int main()
// {
//     int a[5] = {15, 2, 26, 20, 25};
//     int i;
//     int len = sizeof(a) / sizeof(a[0]);
//     cout << "size of array:" << len;
//     for (i = 1; i <= len; i++)
//     {
//         cout <<endl<<"value of array:"<< a[i];
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
// int size, i, j;
// cout << "Enter the size of array:";
// cin >> size;
// int a[size];

// for (i = 0; i < size; i++)
// {

//     cout << "please enter the value of array:";

//     cin >> a[i];
// }
//     for (j = 0; j < size; j++)
//     {
//         cout <<endl<< "array value:" << a[j];
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int size, i, j, sum = 0;
    float ave;
    cout << "Enter the size of array:";
    cin >> size;
    int a[size];

    for (i = 0; i < size; i++)
    {

        cout << "please enter the value of array:";
        cin >> a[i];
        sum = sum + a[i];
    }
    ave = sum * 100 / 500;
    cout << "ave of:" << ave;

    return 0;
}