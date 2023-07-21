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
    int count = 0, total = n * m;
    int row = 0, col = 0;
    while (count < total)
    {
        for (int i = n - 1; i >= 0 && count < total; i--)
        {
            cout << arr[i][col] << " ";
            count++;
        }
        cout << "\n";
        col++;
    }
    return 0;
}