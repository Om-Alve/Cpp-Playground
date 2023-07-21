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
    int srow = 0, scol = 0, erow = n - 1, ecol = m - 1;
    while (count < total)
    {
        // Printing starting row
        for (int i = scol; i <= ecol && count < total; i++)
        {
            cout << arr[srow][i] << " ";
            count++;
        }
        srow++;

        // Printing ending column
        for (int i = srow; i <= erow && count < total; i++)
        {
            cout << arr[i][ecol] << " ";
            count++;
        }
        ecol--;

        // Printing ending row
        for (int i = ecol; i >= scol && count < total; i--)
        {
            cout << arr[erow][i] << " ";
            count++;
        }
        erow--;

        // Printing starting column
        for (int i = erow; i >= srow && count < total; i--)
        {
            cout << arr[i][scol] << " ";
            count++;
        }
        scol++;
    }
    return 0;
}