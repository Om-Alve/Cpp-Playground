#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    for (int i = 0, j = 0; i < n, j < m;)
    {
        bool found = false;
        if (a[i] < b[j])
        {
            i++;
        }
        else if (a[i] == b[j] && found == false)
        {
            cout << a[i] << "  ";
            found = true;
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
    return 0;
}