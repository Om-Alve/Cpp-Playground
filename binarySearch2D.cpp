#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int k;
    cin >> k;
    int s = 0, e = n * m - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        int element = arr[mid / m][mid % m];
        if (element == k)
        {
            cout << "Found at (" << mid / m << "," << mid % m << ")";
            return 0;
        }
        else if (element > k)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    cout << "Not Found";
    return 0;
}