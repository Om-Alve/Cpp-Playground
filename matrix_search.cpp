#include <iostream>
using namespace std;
int main()
{
    int n, m, k;
    int a[n][m];
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    cin >> k;
    int r = 0, c = m - 1;
    bool found = false;
    while (r < n and c >= 0)
    {
        if (a[r][c] == k)
        {
            found = true;
            break;
        }
        else if (a[r][c] > k)
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    if (found)
    {
        cout << "Found";
    }
    else
    {
        cout << "Not Found";
    }
    return 0;
}