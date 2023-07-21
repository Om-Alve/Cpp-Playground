#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long a;
    if (n % 2 == 0)
        a = n / 2;
    else
        a = ((n + 1) / 2) * (-1);
    cout << a;
    return 0;
}