#include <iostream>
using namespace std;

void asterisk(int n)
{
    if (n == 0)
        return;
    asterisk(n - 1);
    cout << "* ";
}

void spaces(int n)
{
    if (n == 0)
    {
        return;
    }
    spaces(n - 1);
    cout << " ";
}

void pattern(int n, int i, int j)
{
    if (n == 0)
        return;
    spaces(j);
    asterisk(i);
    cout << "\n";
    pattern(n - 1, i - 1, j + 1);
}

int main()
{
    int n;
    cin >> n;
    pattern(n, n, 0);
    return 0;
}