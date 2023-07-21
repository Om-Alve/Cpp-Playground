#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int mag[n];
    for (int i = 0; i < n; i++)
    {
        cin >> mag[i];
    }
    int groups = 0;
    for (int i = 0; i < n; i++)
    {
        if (mag[i] != mag[i + 1])
        {
            groups++;
        }
    }
    cout << groups;
    return 0;
}