#include <iostream>
using namespace std;

void moveZeros(int arr[], int n);
void printArray(int arr[], int n);

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    moveZeros(arr, n);
    printArray(arr, n);
    return 0;
}

void moveZeros(int arr[], int n)
{
    int s = 0, e = n - 1, k = 0;
    while (s <= e)
    {
        if (arr[s] != 0)
        {
            swap(arr[s], arr[k++]);
        }
        s++;
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