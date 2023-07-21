#include <iostream>
using namespace std;

int pivot(int s, int e, int arr[]);
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
    cout << pivot(0, n, arr);
    return 0;
}
int pivot(int s, int e, int arr[])
{
    // int pivot;
    // int s = 0, e = n - 1, mid = (s + e) / 2;
    // while (s < e)
    // {
    //     if (arr[mid] >= arr[0])
    //     {
    //         s = mid + 1;
    //     }
    //     else
    //     {
    //         e = mid;
    //     }
    //     mid = (s + e) / 2;
    // }
    // cout << s;

    // Recursive approach
    if (s > e)
        return -1;
    int mid = s + (e - s) / 2;
    if (arr[mid] < arr[mid - 1] && arr[mid] < arr[mid + 1])
        return mid;
    else if (arr[mid] >= arr[0])
        return pivot(mid + 1, e, arr);
    else
        return pivot(s, mid, arr);
}
