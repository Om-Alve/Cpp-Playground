#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        if (a % b == 0)
            cout << 0 << "\n";
        else
            cout << b - (a % b) << "\n";
    }
    // pair<int, int> arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i].first >> arr[i].second;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << divisibility(arr[i].first, arr[i].second);
    //     cout << endl;
    // }
    return 0;
}