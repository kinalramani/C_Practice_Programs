#include <iostream>
using namespace std;

struct Mystructure
{
    int a;
    char b;
    float c;
};
union Myunion
{
    int a;
    char b; 
    float c;
};

int main()
{
    struct Mystructure m;
    union Myunion u;
    m.a = 10;
    u.a = 50;
    cout << m.b << endl;
    cout << u.b;

    return 0;
}