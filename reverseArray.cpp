#include <iostream>
#include <array>
using namespace std;

void printArray(int arr[], int n);
void reverse(int arr[], int n);
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    reverse(arr, n);
    printArray(arr, n);
    return 0;
}

void reverse(int arr[], int n)
{
    int s = 0, e = n - 1;
    while (s < e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return;
}