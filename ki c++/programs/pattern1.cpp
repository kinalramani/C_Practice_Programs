// #include <iostream>
// using namespace std;

// int main()
// {
//     int i, j, k;
//     for (i = 1; i <= 5; i++)
//     {

//         for (j = 3; j > i; j--)
//         {
//             cout << "  ";
//         }
//         for (k = 1; k <= i; k++)
//         {
//             cout << " *  ";
//         }
//         cout << "\n";
//     }

//     return 0;
// }



#include <iostream>
using namespace std;

int main()
{
    int i, j, k;
    for (i = 1; i <= 5; i++)
    {

        for (j = 1; j <= i; j++)
        {
            cout << "  ";
        }
        for (k = 5; k >= i; k--)
        {
            cout << " *  ";
        }
        cout << "\n";
    }

    return 0;
}