// #include <iostream>
// using namespace std;

// int main()
// {
//     int num, i, j = 5;
//     cout << "Enter the number:";
//     cin >> num;
//     for (i = 1; i <= num; i++)
//     {
//         for (j = 1; j <= num - i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int num, i, j = 1;
//     cout << "Enter the number:";
//     cin >> num;
//     for (i = 5; i >= 1; i--)
//     {
//         for (j = 1; j < i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int num, i, j;
//     cout << "Enter the number:";
//     cin >> num;
//     for (i = 0; i < num; i++)
//     {
//         for (j = 1; j < num; j++)
//         {
//             cout << "*  ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// // Function to demonstrate printing pattern
// void pypart2(int n)
// {
//     // number of spaces
//     int k = 2 * n - 2;

//     // Outer loop to handle number of rows
//     // n in this case
//     for (int i = n; i > 0; i--)
//     {

//         // Inner loop to handle number spaces
//         // values changing acc. to requirement
//         for (int j = 0; j < n - i; j++)
//             cout << "  ";

//         // Decrementing k after each loop
//         k = k - 2;

//         // Inner loop to handle number of columns
//         // values changing acc. to outer loop
//         for (int j = 0; j < i; j++)
//         {
//             // Printing stars
//             cout << "* ";
//         }

//         // Ending line after each row
//         cout << endl;
//     }
// }

// // Driver Code
// int main()
// {
//     int n = 5;

//     // Function Call
//     pypart2(n);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     int rows;

//     cout << "Enter number of rows: ";
//     cin >> rows;

//     for (int i = 1; i <= rows; ++i)
//     {
//         for (int j = 1; j <= i; ++j)
//         {
//             cout << j << " ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     char input, alphabet = 'A';

//     cout << "Enter the uppercase character you want to print in the last row: ";
//     cin >> input;

//     // convert input character to uppercase
//     input = toupper(input);

//     for (int i = 1; i <= (input - 'A' + 1); ++i)
//     {
//         for (int j = 1; j <= i; ++j)
//         {
//             cout << alphabet << " ";
//         }
//         ++alphabet;

//         cout << endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{

    int space, rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 1, k = 0; i <= rows; ++i, k = 0)
    {
        for (space = 1; space <= rows - i; ++space)
        {
            cout << "  ";
        }

        while (k != 2 * i - 1)
        {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }
    return 0;
}
