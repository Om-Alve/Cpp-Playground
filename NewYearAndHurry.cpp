#include <bits/stdc++.h>
using namespace std;

int solve(int n, int time)
{
    int sum = 0, ans = 0;
    for (int i = 5; i <= time && ans < n; i += 5)
    {
        sum += i;
        if (sum <= time)
        {
            ans++;
        }
    }
    return ans;
}

int main()
{
    int n, k;
    cin >> n >> k;
    int time = 240 - k;
    cout << solve(n, time);
    return 0;
}