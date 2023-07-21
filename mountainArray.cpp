#include <iostream>
using namespace std;

int mountainPeak(int s, int e, int arr[]);
int main()
{
    int n;
    cin >> n;
    int s = 0, e = n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << mountainPeak(0, n, arr);
    return 0;
}
int mountainPeak(int s, int e, int arr[])
{
    // int s = 0, e = n - 1, mid = (s + e) / 2;
    // while (s <= e)
    // {
    //     if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
    //     {
    //         cout << mid;
    //         return;
    //     }
    //     else if (arr[mid] > arr[mid - 1] && arr[mid] < arr[mid + 1])
    //     {
    //         s = mid + 1;
    //     }
    //     else if (arr[mid] < arr[mid - 1] && arr[mid] > arr[mid + 1])
    //     {
    //         e = mid - 1;
    //     }
    //     mid = (s + e) / 2;
    // }
    // return;

    // Recursive approach
    if (s > e)
        return -1;
    int mid = s + (e - s) / 2;
    if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        return mid;
    else if (arr[mid] > arr[mid - 1])
        return mountainPeak(mid + 1, e, arr);
    else
        return mountainPeak(s, mid - 1, arr);
}