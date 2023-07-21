#include <iostream>
using namespace std;
int bin(int num)
{
    int ans = 0;
    int x = 1;
    while (num > 0)
    {
        int y = num % 10;
        ans += x * y;
        x *= 2;
        num /= 10;
    }
    return ans;
}
int main()
{
    int num;
    cin >> num;
    cout << bin(num) << endl;
    return 0;
}