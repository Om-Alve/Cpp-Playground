#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // for printing n rows
    for (int i = 0; i < n; i++)
    {
        // for printing 1 to n numbers
        int j = 1;
        while (j <= n - i)
        {
            cout << j << " ";
            j++;
        }
        // for printing stars
        int k = i;
        while (k > 0)
        {
            cout << "* * ";
            k--;
        }
        // for printing n to 1 numbers
        j = n - i;
        while (j > 0)
        {
            cout << j << " ";
            j--;
        }
        // new line after each row
        cout << "\n";
    }

    return 0;
}