#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string messages;
        cin >> messages;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (messages[i] == 'Q')
                count++;
            else if (count > 0)
                count--;
            else
                count = 0;
        }
        if (count == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}