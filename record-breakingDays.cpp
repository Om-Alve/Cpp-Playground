#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    int n;
    cin >> n;
    int mx = -1;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mx && arr[i] > arr[i + 1])
        {
            count++;
        }
        mx = max(mx, arr[i]);
    }
    cout << count;
    return 0;
}