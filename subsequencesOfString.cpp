#include <bits/stdc++.h>
using namespace std;

vector<string> subsequences(string s);
void solve(string s, string output, int index, vector<string> &ans);

int main()
{
    string s;
    cin >> s;
    vector<string> ans = subsequences(s);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << "[";
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j];
        }
        cout << "]";
        if (i < ans.size() - 1)
            cout << ",";
    }
    return 0;
}

vector<string> subsequences(string s)
{
    int index = 0;
    vector<string> ans;
    string output = "";

    solve(s, output, index, ans);

    return ans;
}
void solve(string s, string output, int index, vector<string> &ans)
{
    if (index >= s.length())
    {
        if (output.length() > 0)
            ans.push_back(output);
        return;
    }

    // Exclude
    solve(s, output, index + 1, ans);

    // Include
    char c = s[index];
    output.push_back(c);
    solve(s, output, index + 1, ans);
}