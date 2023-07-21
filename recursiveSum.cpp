#include <bits/stdc++.h>
using namespace std;

int sum(vector<int> arr, int n)
{
    if (n == 0)
    {
        return arr[0];
    }
    return arr[n] + sum(arr, n - 1);
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
    cout << sum(arr, n - 1);
    return 0;
}