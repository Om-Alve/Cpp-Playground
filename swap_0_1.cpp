#include <iostream>
using namespace std;

void printArray(int n, int arr[]);
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int left = 0;
    int right = n - 1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    while (left < right)
    {
        while (arr[left] == 0)
        {
            left++;
        }
        while (arr[right] == 1)
        {
            right--;
        }
        if (arr[left] == 1 && arr[right] == 0)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
    printArray(n, arr);
    return 0;
}
void printArray(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}