#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ans = 0;
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        switch (s[0])
        {
        case 'T':
            ans += 4;
            break;
        case 'C':
            ans += 6;
            break;
        case 'O':
            ans += 8;
            break;
        case 'D':
            ans += 12;
            break;
        case 'I':
            ans += 20;
            break;
        default:
            break;
        }
    }
    cout << ans;
    return 0;
}