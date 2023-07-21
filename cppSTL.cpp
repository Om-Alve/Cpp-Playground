#include <iostream>
#include <array>
#include <vector>
using namespace std;

int main()
{
    vector<int> a(5, 1);
    for (int i : a)
    {
        cout << a[i] << " ";
    }
    return 0;
}