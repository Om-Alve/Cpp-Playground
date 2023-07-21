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
        n--;
        string s;
        cin >> s;
        string letters = " abcdefghijklmnopqrstuvwxyz";
        string ans = "";
        int index = -1;
        while (n >= 0)
        {
            if (s[n] == '0')
            {
                index = (s[n - 2] - '0') * 10 + (s[n - 1] - '0');
                n -= 3;
            }
            else
                index = (s[n--] - '0');
            ans.push_back(letters[index]);
        }
        reverse(ans.begin(), ans.end());
        cout << ans << "\n";
    }
    return 0;
}