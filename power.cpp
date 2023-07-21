#include <iostream>
using namespace std;

int power(int n, int p);
int main()
{
    int n, p;
    cin >> n >> p;
    cout << power(n, p);
    return 0;
}
int power(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }
    if (p == 1)
        return n;
    int ans = power(n, p / 2);
    // for even power
    if (p % 2 == 0)
        return ans * ans;
    // for odd power
    else
        return n * ans * ans;
}