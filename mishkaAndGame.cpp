#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int mishka = 0, chris = 0;
    int d1 = 0, d2 = 0;
    while (n--)
    {
        cin >> d1 >> d2;
        if (d1 > d2)
            mishka++;
        else if (d1 < d2)
            chris++;
    }
    if (mishka > chris)
        cout << "Mishka\n";
    else if (mishka < chris)
        cout << "Chris\n";
    else
        cout << "Friendship is magic!^^\n";
    return 0;
}