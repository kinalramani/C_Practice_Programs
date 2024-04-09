// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, sum = 0, r;
//     cout << "Enter rhe number :";
//     cin >> n;
//     while (n > 0)
//     {
//         r = n % 10;
//         sum = sum + r;
//         n = n / 10;
//     }

//     cout << "sum is:" << sum << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, reverse = 0, rem;
//     cout << "Enter a number: ";
//     cin >> n;
//     while (n != 0)
//     {
//         rem = n % 10;
//         reverse = reverse * 10 + rem;
//         n /= 10;
//     }
//     cout << "Reversed Number: " << reverse << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, j, k, l, n;
//     cout << "Enter the Range=";
//     cin >> n;
//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= n - i; j++)
//         {
//             cout << " ";
//         }
//         for (k = 1; k <= i; k++)
//         {
//             cout << k;
//         }
//         for (l = i - 1; l >= 1; l--)
//         {
//             cout << l;
//         }
//         cout << "\n";
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int n1 = 0, n2 = 1, n3, i, number;
    cout << "Enter the number of elements: ";
    cin >> number;
    cout << n1 << " " << n2 << " "; // printing 0 and 1
    for (i = 2; i < number; ++i)    // loop starts from 2 because 0 and 1 are already printed
    {
        n3 = n1 + n2;
        cout << n3 << " ";
        n1 = n2;
        n2 = n3;
    }
    return 0;
}