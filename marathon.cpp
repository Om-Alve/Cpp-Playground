#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        int ans = 0;
        for (int i = 1; i < 4; i++)
        {
            int other;
            cin >> other;
            if (other > a)
                ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}