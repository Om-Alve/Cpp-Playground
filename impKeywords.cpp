#include <iostream>
using namespace std;

int main()
{
    int a = 1, b = 2;
    int ans;
    ans = (a > b) ? a : b;
    cout << ans << endl;
    ans = (a < b) ? a : b;
    cout << ans;
    return 0;
}