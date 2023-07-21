#include <iostream>
using namespace std;

int calculate(int k, int r)
{
    int i = 1;
    while (true)
    {
        int h = k * i;
        if (h % 10 == 0 || h % 10 == r)
            return i;
        i++;
    }
}

int main()
{
    int k, r;
    cin >> k >> r;
    cout << calculate(k, r);
    return 0;
}