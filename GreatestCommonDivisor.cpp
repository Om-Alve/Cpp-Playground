#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int gcd = 1;
    // Bruteforce
    // Time complexity O(n)
    // int i = 1;
    // while (i <= n && i <= m)
    // {
    //     if (n % i == 0 && m % i == 0)
    //     {
    //         gcd = i;
    //     }
    //     i++;
    // }

    // Euclids Algorithm
    // Formula --> GCD = GCD(a%b,b)

    if (n == 0)
    {
        cout << m;
        return 0;
    }
    if (m == 0)
    {
        cout << n;
        return 0;
    }
    while (n != m)
    {
        if (n > m)
        {
            n -= m;
        }
        else
        {
            m -= n;
        }
    }
    cout << n;
    return 0;
}