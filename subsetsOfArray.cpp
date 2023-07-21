#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> subsets(vector<int> &arr);
void solve(vector<int> arr, vector<int> output, int index, vector<vector<int>> &ans);

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr.emplace_back(num);
    }
    vector<vector<int>> ans = subsets(arr);
    cout << "[ ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << "[";
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j];
            if (j < ans[i].size() - 1)
                cout << ",";
        }
        cout << "]";
        if (i < ans.size() - 1)
            cout << " , ";
    }
    cout << " ]\n";
    return 0;
}

vector<vector<int>> subsets(vector<int> &arr)
{
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;
    solve(arr, output, index, ans);
    return ans;
}

void solve(vector<int> arr, vector<int> output, int index, vector<vector<int>> &ans)
{
    if (index >= arr.size())
    {
        ans.push_back(output);
        return;
    }

    // exclude
    solve(arr, output, index + 1, ans);

    // include
    int element = arr[index];
    output.push_back(element);
    solve(arr, output, index + 1, ans);
}