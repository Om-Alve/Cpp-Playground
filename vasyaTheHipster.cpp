#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int fashionable = 0;
    int normal = 0;
    if (a > b)
    {
        fashionable = b;
        a -= b;
        normal = a / 2;
    }
    else
    {
        fashionable = a;
        b -= a;
        normal = b / 2;
    }
    cout << fashionable << " " << normal;
    return 0;
}