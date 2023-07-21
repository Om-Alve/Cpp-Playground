#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int steps = 0;
    int i = 5;
    while (n > 0)
    {
        if (n >= i)
        {
            n -= i;
            steps++;
        }
        else
        {
            i--;
        }
    }
    cout << steps;
    return 0;
}