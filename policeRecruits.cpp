#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int recruits = 0;
    int crimes = 0;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x > 0)
        {
            recruits += x;
        }
        else
        {
            if (recruits > 0)
            {
                recruits--;
            }
            else
            {
                crimes++;
            }
        }
    }
    cout << crimes;
    return 0;
}