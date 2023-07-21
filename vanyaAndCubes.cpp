#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = -1, sum = 0;
    for (int i = 1; sum <= n; i++)
    {
        for (int j = 1; j <= i && sum <= n; j++)
        {
            sum += j;
        }
        ans++;
    }
    cout << ans;
    return 0;
}