#include <bits/stdc++.h>
using namespace std;

void solve(string s, int index, vector<string> &ans)
{
    if (index >= s.length())
    {
        ans.push_back(s);
        return;
    }
    for (int j = index; j < s.length(); j++)
    {
        swap(s[index], s[j]);
        solve(s, index + 1, ans);
        swap(s[index], s[j]);
    }
}

vector<string> permutations(string s)
{
    vector<string> ans;
    int index = 0;
    solve(s, index, ans);
    return ans;
}

int main()
{
    string s;
    cin >> s;
    vector<string> ans = permutations(s);
    cout << "{ ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << "[";
        cout << ans[i];
        cout << "]";
        if (i < ans.size() - 1)
            cout << " , ";
    }
    cout << " }";
    return 0;
}