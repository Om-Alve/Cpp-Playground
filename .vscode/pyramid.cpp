#include <iostream>
using namespace std;

void asterisk(int n)
{
    if (n == 0)
        return;
    cout << "* ";
    asterisk(n - 1);
}

void spaces(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << " ";
    spaces(n - 1);
}

void pattern(int n, int i, int j)
{
    if (n == 0)
        return;
    spaces(j);
    asterisk(i);
    cout << "\n";
    pattern(n - 1, i + 1, j - 1);
}

int main()
{
    int n;
    cin >> n;
    pattern(n, 1, n - 1);
    return 0;
}