#include <bits/stdc++.h>
using namespace std;

int main()
{
    double ans = 0.0;
    int t;
    cin >> t;
    float n = (float)t;
    while (t--)
    {
        double a;
        cin >> a;
        ans += a;
    }
    ans /= n;
    cout << fixed << setprecision(12) << ans;
    return 0;
}