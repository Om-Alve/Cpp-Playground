#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string op;
    int X = 0;
    while (n > 0)
    {
        cin >> op;
        if (op[1] == '+')
        {
            X++;
        }
        else
        {
            X--;
        }
        n--;
    }
    cout << X;
    return 0;
}