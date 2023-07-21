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
    int answer = 0;
    for (int i = 0; i < n; i++)
    {
        answer ^= arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        answer ^= i;
    }
    cout << answer << endl;
    return 0;
}