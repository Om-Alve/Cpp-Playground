#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int pd, ans = 2, curr = 2;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        int j = 2;
        pd = arr[1] - arr[0];
        while (j < n)
        {
            if (arr[j] - arr[j - 1] == pd)
            {
                curr++;
            }
            else
            {
                pd = arr[j] - arr[j - 1];
                curr = 2;
            }
            ans = max(ans, curr);
            j++;
        }
    }
    cout << ans << endl;
    return 0;
}