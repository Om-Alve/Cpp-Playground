#include <iostream>
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
    int unique = 0;
    for (int i = 0; i < n; i++)
    {
        unique ^= arr[i];
    }
    cout << unique;
    return 0;
}