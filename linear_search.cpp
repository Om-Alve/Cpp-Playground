#include <iostream>
using namespace std;
int linearSearch(int arr[], int n, int key)
{
    // Iterative approach
    // for (int i = 0; i < n; i++)
    // {
    //     if (key == arr[i])
    //     {
    //         return i;
    //     }
    // }
    // return -1;

    // Recursive approach
    if (n < 0)
    {
        return -1;
    }
    if (arr[n] == key)
    {
        return n;
    }
    return linearSearch(arr, n - 1, key);
}
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
    cout << linearSearch(arr, n - 1, key);
    return 0;
}