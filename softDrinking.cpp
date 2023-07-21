#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int drink = k * l, limeslice = c * d;
    int ans = min(min(drink / nl, limeslice), p / np);
    ans /= n;
    cout << ans;
    return 0;
}