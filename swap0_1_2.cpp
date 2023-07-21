#include <iostream>
using namespace std;

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
    int l = 0, m = 0, h = n - 1;
    while (m <= h)
    {
        while (arr[m] == 0)
        {
            swap(arr[m], arr[l]);
            l++;
            m++;
        }
        while (arr[m] == 2)
        {
            swap(arr[m], arr[h]);
            m++;
            h--;
        }
        if (arr[m] == 1)
        {
            m++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}