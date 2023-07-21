#include <bits/stdc++.h>
using namespace std;

// This algorithm is called Sieve of Eratosthenes
// Time complexity is O(n*log(log n))

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    vector<bool> isprime(n + 1, true);
    isprime[0] = false;
    isprime[1] = false;
    for (int i = 2; i < n; i++)
    {
        if (isprime[i])
        {
            ans++;
            for (int j = 2 * i; j < n; j = j + i)
            {
                isprime[j] == false;
            }
        }
    }
    cout << ans;
    return 0;
}