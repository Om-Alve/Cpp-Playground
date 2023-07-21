#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 2; i < n; i += 2)
    {
        for (int j = 2; j < n; j += 2)
        {
            if (i + j == n)
            {
                cout << "YES\n";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}