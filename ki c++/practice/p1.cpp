#include <iostream>
using namespace std;

int main()
{

    int a;
    cout << "1. For Celsius To Fahrenheit."<<endl;
    cout << "2. For Fahrenheit To Celsius."<<endl;
    cout << "Enter your choice:"<<endl;
    cin >> a;

    switch (a)
    {
        double f, c;
    case 1:
        cout << "Enter The Temperature In Celsius."<<endl;
        cin >> c;
        f = (c * 1.8) + 32;
        cout << endl<< "Temperature In Fahrenheit Is = " << f;
        break;

    case 2:
        cout << "Enter The Temperature In Fahrenheit"<<endl;
        cin >> f;
        c = (f - 32) * 5 / 9;
        cout <<endl<< "Temperature In Celsius Is = " << c;
        break;

    default:

        break;
    }

    return 0;
}