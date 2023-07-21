#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sereja = 0, dima = 0;
    int i = 0, j = n - 1, move = 1;
    while (i <= j)
    {
        if (arr[i] > arr[j])
        {
            if (move % 2 == 1)
            {
                sereja += arr[i++];
            }
            else
            {
                dima += arr[i++];
            }
            move += 1;
        }
        else
        {
            if (move % 2 == 1)
            {
                sereja += arr[j--];
            }
            else
            {
                dima += arr[j--];
            }
            move += 1;
        }
    }
    cout << sereja << " " << dima;
    return 0;
}