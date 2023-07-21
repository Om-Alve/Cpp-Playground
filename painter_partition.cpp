#include <iostream>
using namespace std;

int mintime(int arr[], int n, int m);
bool isPossible(int arr[], int n, int m, int mid);
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << mintime(arr, n, m);
    return 0;
}
int mintime(int arr[], int n, int m)
{
    int s = 0, ans = 0, e = 0;
    for (int i = 0; i < n; i++)
    {
        e += arr[i];
    }
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
bool isPossible(int arr[], int n, int m, int mid)
{
    int sum = 0, count = 1;
    for (int i = 1; i < n; i++)
    {
        if (sum + arr[i] <= mid)
        {
            sum += arr[i];
        }
        else
        {
            count++;
            if (count > m)
            {
                return false;
            }
            sum = arr[i];
        }
    }
    return true;
}