#include <iostream>
using namespace std;

int fib(int n)
{
    // Recursive approach
    // Base case
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }
    // Recursive call
    return fib(n - 1) + fib(n - 2);

    // Iterative approach
    // int t1 = 0, t2 = 1, t3;
    // int ans = 0;
    // if (n == 0)
    // {
    //     return t1;
    // }
    // if (n == 1)
    // {
    //     return t2;
    // }
    // for (int i = 0; i < n - 1; i++)
    // {
    //     t3 = t1 + t2;
    //     t1 = t2;
    //     t2 = t3;
    // }
    // return t3;
}

int main()
{
    int n;
    cin >> n;
    cout << fib(n);
    return 0;
}