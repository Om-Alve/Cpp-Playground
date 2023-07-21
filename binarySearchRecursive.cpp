#include <iostream>
using namespace std;

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
    cout << binarySearch(0, n - 1, arr, key);
    return 0;
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