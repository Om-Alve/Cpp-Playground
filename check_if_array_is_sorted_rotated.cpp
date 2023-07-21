#include <iostream>
using namespace std;

void printArray(int arr[], int n);
bool check(int arr[], int n);

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (check(arr, n))
    {
        cout << "Array is sorted \n";
    }
    else
    {
        cout << "Array is not sorted \n";
    }
    return 0;
}

bool check(int arr[], int n)
{
    int pair = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            pair++;
        }
    }
    if (arr[n - 1] > arr[0])
    {
        pair++;
    }
    return pair <= 1;
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return;
}