#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string Berlandish, Birlandish;
    cin >> Berlandish;
    cin >> Birlandish;
    string translated;
    int n = Berlandish.length();
    for (int i = n - 1; i >= 0; i--)
    {
        translated += Berlandish[i];
    }
    if (Birlandish == translated)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}