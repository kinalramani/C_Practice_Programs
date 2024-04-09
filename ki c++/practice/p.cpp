#include <iostream>
using namespace std;

int main()
{
    char c;
    // bool lowercasevowel, Uppercasevowel;
    cout << "Enter the charctre:";
    cin >> c;

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        cout << c << "charcter is vowel:";
    }
    else
    {
        cout << c << "character is consonalnts:";
    }

    return 0;
}