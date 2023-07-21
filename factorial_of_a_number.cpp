#include <iostream>
using namespace std;

int fact(int n);

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    cout << fact(n1) << endl;
    cout << fact(n2) << endl;
    return 0;
}

int fact(int n)
{
    // Base Case
    if (n == 0)
    {
        return 1;
    }
    return n * fact(n - 1);
}