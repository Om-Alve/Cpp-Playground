#include <iostream>
#include <climits>
using namespace std;

int minPageSum(int arr[], int n, int m, int h, int l);
bool isPossibleSoln(int arr[], int n, int m, int mid);
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int low = 0, high = 0;
    for (int i = 0; i < n; i++)
    {
        high += arr[i];
    }
    cout << minPageSum(arr, n, m, high, low);
    return 0;
}
int minPageSum(int arr[], int n, int m, int h, int l)
{
    int mid = l + (h - l) / 2;
    int ans = -1;
    while (l <= h)
    {
        if (isPossibleSoln(arr, n, m, mid))
        {
            ans = mid;
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
        mid = l + (h - l) / 2;
    }
    return ans;
}
bool isPossibleSoln(int arr[], int n, int m, int mid)
{
    int sum = 0;
    int student = 1;
    for (int i = 0; i < n; i++)
    {
        if (sum + arr[i] <= mid)
        {
            sum += arr[i];
        }
        else
        {
            student++;
            if (student > m || arr[i] > mid)
            {
                return false;
            }
        }
        sum = arr[i];
    }
    return true;
}