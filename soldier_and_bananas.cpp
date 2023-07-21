#include <iostream>
using namespace std;

int main()
{
    int initial, banana, cost, sum = 0, ans;
    int count = 1;
    cin >> cost >> initial >> banana;
    while (banana > 0)
    {
        sum += (cost * count);
        count++;
        banana--;
    }
    if (sum <= initial)
    {
        cout << 0;
        return 0;
    }
    ans = sum - initial;
    cout << ans;
    return 0;
}