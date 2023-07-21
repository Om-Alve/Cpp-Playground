#include <iostream>
using namespace std;
int fact(int num)
{
    long fact = 1.0;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    int n;
    int r;
    cin >> n >> r;
    int comb;
    comb = (fact(n)) / ((fact(n - r)) * (fact(r)));
    cout << comb;
    return 0;
}