// #include <iostream>
// using namespace std;

// int sum(int a, int b)
// {
//     return a + b;
// }
// int main()
// {
//     int x, y, add;
//     cout << "Enter the number of x&y:";
//     cin >> x >> y;
//     sum = sum+add(x, y);
//     cout <<add(x,y);

//     return 0;
// }

#include <iostream>
using namespace std;

int addi(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
int sub(int a, int b)
{
    int c;
    c = a - b;
    return c;
}
int mul(int a, int b)
{
    int c;
    c = a * b;
    return c;
}
int divi(int a, int b)
{
    int c;
    c = a / b;
    return c;
}
int main()
{
    int n1, n2, num;
    cout << "Enter the value of n1&n2:";
    cin >> n1 >> n2;
    cout << "addition:";
    num = addi(n1, n2);
    cout << num;

    cout << "substraction:";
    num = sub(n1, n2);
    cout << num;

    cout << "multiplication:";
    num = mul(n1, n2);
    cout << num;

    cout << "division:";
    num = divi(n1, n2);
    cout << num;

    return 0;
}