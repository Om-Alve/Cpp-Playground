#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int mx = INT_MIN;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, arr[i]);
        cout << mx << endl;
    }
    return 0;
}