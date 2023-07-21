#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum += s[i] - '0';
        }
        for (int j = 3; j < 6; j++)
        {
            sum -= s[j] - '0';
        }
        if (sum == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}