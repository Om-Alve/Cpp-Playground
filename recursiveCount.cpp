#include <iostream>
using namespace std;

void count(int n);

int main()
{
    int n;
    cin >> n;
    count(n);
    return 0;
}

void count(int n)
{
    if (n == 0)
    {
        return;
    }
    // cout << n << " "; --> Tail Recursion
    count(n - 1);
    cout << n << " "; // --> Head Recursion
}