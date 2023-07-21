#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> arr, int index, vector<vector<int>> &ans)
{
    if (index >= arr.size())
    {
        ans.push_back(arr);
    }
    for (int j = index; j < arr.size(); j++)
    {
        swap(arr[index], arr[j]);
        solve(arr, index + 1, ans);
        swap(arr[index], arr[j]);
    }
}

vector<vector<int>> permutations(vector<int> arr)
{
    vector<vector<int>> ans;
    int index = 0;
    solve(arr, index, ans);
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }
    vector<vector<int>> ans = permutations(arr);
    cout << "{ ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << "[";
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j];
            if (j < ans[i].size())
                cout << ",";
        }
        cout << "]";
        if (i < ans.size() - 1)
            cout << ",";
    }
    cout << " }";
    return 0;
}