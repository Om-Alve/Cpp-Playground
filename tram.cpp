#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int stops[n][2];
    int maxi = -1;
    int pass = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> stops[i][j];
        }
        pass -= stops[i][0];
        pass += stops[i][1];
        maxi = max(maxi, pass);
    }
    cout << maxi;
    return 0;
}