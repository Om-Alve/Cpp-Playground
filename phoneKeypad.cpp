#include <bits/stdc++.h>
using namespace std;

vector<string> combinations(string s);
void solve(string s, string output, int index, vector<string> &ans, string map[]);

int main()
{
    string s;
    cin >> s;
    vector<string> ans = combinations(s);
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

vector<string> combinations(string s)
{
    vector<string> ans;
    string output = "";
    int index = 0;
    int j = 0;
    string map[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    solve(s, output, index, ans, map);
    return ans;
}
void solve(string s, string output, int index, vector<string> &ans, string map[])
{
    if (index >= s.length())
    {
        ans.push_back(output);
        return;
    }
    int number = s[index] - '0';
    string value = map[number];
    for (int i = 0; i < value.length(); i++)
    {
        output.push_back(value[i]);
        solve(s, output, index + 1, ans, map);
        output.pop_back();
    }
}