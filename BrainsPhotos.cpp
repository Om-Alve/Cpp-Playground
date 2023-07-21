#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    string s;
    for (int i = 0; i < n * m; i++)
    {
        char c;
        cin >> c;
        if (c == 'C' || c == 'M' || c == 'Y')
        {
            cout << "#Color\n";
            return 0;
        }
        s += c;
    }
    cout << "#Black&White";

    return 0;
}