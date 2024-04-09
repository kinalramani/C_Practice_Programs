#include <iostream>
using namespace std;

int main()
{
    int num, i;
    cout << "Enter the number of table:";
    cin >> num;
    cout << "tavle of:" << num;
    for (i = 1; i <= 10; i++)
    {
        cout <<endl<< num <<'*'<< i <<'='<< num * i;
    }

    return 0;
}