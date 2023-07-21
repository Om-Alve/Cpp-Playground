#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        bool found = false;
        string s;
        cin >> n;
        cin >> s;
        int first = 0, last = 0;
        char temp = '0';
        for (int i = 0; i < n; i++)
        {
            if (found)
                break;
            if (temp == s[i])
                continue;
            temp = s[i];
            first = i;
            for (int j = i + 1; j < n; j++)
            {
                if (s[j] == temp)
                    last = j;
            }
            for (int k = first; k <= last; k++)
            {
                if (s[k] != temp)
                {
                    cout << "NO\n";
                    found = true;
                    break;
                }
            }
        }
        if (!found)
        {
            cout << "YES\n";
                }
    }
    return 0;
}