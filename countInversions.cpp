#include <iostream>
using namespace std;

int merge(int arr[], int temp[], int left, int mid,
          int right);
int inverseCount(int arr[], int temp[], int s, int e);

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int *temp = new int[n];
    cout << inverseCount(arr, temp, 0, n - 1);
    delete[] arr;
    return 0;
}

// This function merges two sorted arrays
// and returns inversion count in the arrays.
int merge(int arr[], int temp[], int left, int mid,
          int right)
{
    int i, j, k;
    int inv_count = 0;

    i = left;
    j = mid;
    k = left;
    while ((i <= mid - 1) && (j <= right))
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
            inv_count = inv_count + (mid - i);
        }
    }

    // Copy the remaining elements of left subarray
    // (if there are any) to temp
    while (i <= mid - 1)
        temp[k++] = arr[i++];

    // Copy the remaining elements of right subarray
    // (if there are any) to temp
    while (j <= right)
        temp[k++] = arr[j++];

    // Copy back the merged elements to original array
    for (i = left; i <= right; i++)
        arr[i] = temp[i];

    return inv_count;
}

int inverseCount(int arr[], int temp[], int s, int e)
{
    int inverse = 0;
    int mid;
    if (s < e)
    {
        mid = s + (e - s) / 2;

        inverse += inverseCount(arr, temp, s, mid);

        inverse += inverseCount(arr, temp, mid + 1, e);

        inverse += merge(arr, temp, s, mid + 1, e);
    }
    return inverse;
}