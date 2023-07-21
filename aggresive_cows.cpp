#include <iostream>
#include <climits>
#include <array>
using namespace std;

int maxdist(int arr[], int n, int m, int e);
bool isPossible(int arr[], int n, int m, int mid);
int main()
{
    int n, m;
    cin >> n >> m;
    int stalls[n];
    int mx = INT_MIN, mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> stalls[i];
        mn = min(stalls[i], mn);
        mx = max(stalls[i], mx);
    }
    int s = 0, e = mx - mn;
    cout << maxdist(stalls, n, m, e);
    return 0;
}
int maxdist(int arr[], int n, int m, int e)
{
    int ans = 0, s = 0, mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
bool isPossible(int arr[], int n, int m, int mid)
{
    int count = 1;
    int lastposition = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] - lastposition >= mid)
        {
            count++;
            if (count == m)
            {
                return true;
            }
            lastposition = arr[i];
        }
    }
    return false;
}