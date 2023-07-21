#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        b[arr[i]] = i + 1;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << b[i] << " ";
    }
    return 0;
}