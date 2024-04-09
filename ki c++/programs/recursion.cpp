#include <iostream>
using namespace std;

int fact(int);
int main()
{
    int n, f;
    cout << "Enter the factorial number :";
    cin >> n;
    f = fact(n);
    cout << "factorial=" << f;
}
int fact(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
    return 0;
}