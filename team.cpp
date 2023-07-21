#include <iostream>
using namespace std;

int main()
{
    int n, m = 3;
    cin >> n;
    int count = 0;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += arr[i][j];
        }
        if (sum >= 2)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}