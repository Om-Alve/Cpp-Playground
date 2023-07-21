#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int rooms[n][2];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> rooms[i][j];
        }
        if (rooms[i][1] - rooms[i][0] >= 2)
        {
            ans++;
        }
    }
    cout << ans;
    return 0;
}