#include <iostream>
using namespace std;

int main()
{
    int r, c, m, i, j, k;
    cout << "Enter your row value of m,r &c:";
    cin >> m >> r >> c;

    int a[m][r][c];

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < r; j++)
        {
            for (k = 0; k < c; k++)
            {
                cout << "plase enter your value:";
                cin >> a[i][j][k];
            }
            cout << endl;
        }
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < r; j++)
        {
            for (k = 0; k < c; k++)
            {
                cout << a[i][j][k] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}

// #include <iostream>
// using namespace std;

// int main()
// {

//     int i, j, k;
//     int a[2][3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18};

//     for (i = 0; i < 2; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             for (k = 0; k < 3; k++)
//             {
//                 cout << a[i][j][k];
//             }
//             cout << endl;
//         }
//     }
//     return 0;
// }
