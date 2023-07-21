#include <iostream>
#include <climits>
using namespace std;
int firstOccurence(int s, int e, int arr[], int key);
int lastOccurence(int s, int e, int arr[], int key);

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
    int key;
    cin >> key;
    cout << firstOccurence(0, n, arr, key);
    cout << " ";
    cout << lastOccurence(0, n, arr, key);
    return 0;
}
int firstOccurence(int s, int e, int arr[], int key)
{
    int mid = s + (e - s) / 2;

    if (s > e)
    {
        return -1;
    }
    if (arr[mid] == key)
    {
        int first = mid;
        int current = firstOccurence(s, mid - 1, arr, key);
        if (current < first && current != -1)
            return current;
        else
            return first;
    }
    else if (arr[mid] > key)
    {
        return firstOccurence(s, mid - 1, arr, key);
    }
    else
    {
        return firstOccurence(mid + 1, e, arr, key);
    }
}
int lastOccurence(int s, int e, int arr[], int key)
{
    int mid = s + (e - s) / 2;
    if (s > e)
    {
        return -1;
    }
    if (arr[mid] == key)
    {
        int current = mid;
        int last = lastOccurence(mid + 1, e, arr, key);
        if (current >= last)
            return current;
        else
            return last;
    }
    else if (arr[mid] > key)
        return lastOccurence(s, mid - 1, arr, key);
    else
        return lastOccurence(mid + 1, e, arr, key);
}