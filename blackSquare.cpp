#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int index = (s[i] - '0') - 1;
        ans += arr[index];
    }
    cout << ans;
    return 0;
}