#include <iostream>
using namespace std;

int pivot(int arr[], int n);
int search(int s, int e, int arr[], int n, int k);
int binarySearch(int s, int e, int arr[], int k);
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;
    cout << search(0, n, arr, n, key);
    return 0;
}
int search(int s, int e, int arr[], int n, int k)
{
    // int s = 0, e = n - 1;
    // int mid = (s + e) / 2;
    // int p = pivot(arr, n);

    // if (arr[p] <= k && arr[n - 1] >= k)
    // {
    //     return binarySearch(p, n - 1, arr, k);
    // }
    // else
    // {
    //     return binarySearch(s, p - 1, arr, k);
    // }
    // Recursive approach
    int p = pivot(arr, n);
    if (s > e)
        return -1;
    if (arr[p] == k)
        return p;
    if (arr[p] < k && arr[n - 1] > k)
        return binarySearch(p, e, arr, k);
    else
        return binarySearch(s, p, arr, k);
}
int pivot(int arr[], int n)
{
    int pivot;
    int s = 0, e = n - 1, mid = (s + e) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = (s + e) / 2;
    }
    return s;
}
int binarySearch(int s, int e, int arr[], int k)
{
    int mid = s + (e - s) / 2;
    // Base cases
    // If element found
    if (arr[mid] == k)
    {
        return mid;
    }
    // If element not found
    if (s > e)
    {
        return -1;
    }
    // Recursive calls
    if (arr[mid] > k)
    {
        return binarySearch(s, mid - 1, arr, k);
    }
    else
    {
        return binarySearch(mid + 1, e, arr, k);
    }
}
