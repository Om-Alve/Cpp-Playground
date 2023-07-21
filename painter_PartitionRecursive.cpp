#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

bool isPossible(int mid, int m, vector<int> arr)
{
    int partition = 1;
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > mid)
            return false;
        sum += arr[i];
        if (sum > mid)
        {
            sum = arr[i];
            partition++;
        }
    }
    if (partition > m)
        return false;
    else
        return true;
}

int mintime(int l, int h, vector<int> arr, int m)
{
    if (l > h)
        return -1;
    int mid = l + (h - l) / 2;
    if (isPossible(mid, m, arr))
    {
        int curr = mid;
        int mini = mintime(l, mid - 1, arr, m);
        if (mini < curr && mini != -1)
            return mini;
        else
            return curr;
    }
    else
    {
        return mintime(mid + 1, h, arr, m);
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    int h = 0;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        h += a;
        arr.push_back(a);
    }
    cout << mintime(0, h, arr, m);
    return 0;
}