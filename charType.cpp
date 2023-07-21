#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{
    char c;
    cin >> c;
    // if (c >= 'a' && c <= 'z')
    // {
    //     cout << "Lowercase";
    // }
    // else if (c >= 'A' && c <= 'Z')
    // {
    //     cout << "Uppercase";
    // }
    // else if (c >= '0' && c <= '9')
    // {
    //     cout << "Number";
    // }
    if (isupper(c))
    {
        cout << "Uppercase";
    }
    else if (islower(c))
    {
        cout << "Lowercase";
    }
    else
    {
        cout << "Number";
    }
    return 0;
}