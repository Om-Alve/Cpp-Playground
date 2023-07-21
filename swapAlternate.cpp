#include <iostream>
using namespace std;

void swapAlternate(int n, int arr[]);
void print(int n, int arr[]);
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    swapAlternate(n, arr);
    print(n, arr);
    return 0;
}
void swapAlternate(int n, int arr[])
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
        else
        {
            continue;
        }
    }
}
void print(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}