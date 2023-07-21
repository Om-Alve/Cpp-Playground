#include <iostream>
#include <vector>
using namespace std;

bool checkSorted(int num[], int n)
{
    if (n == 0 || n == 1)
        return true;
    if (num[0] > num[1])
    {
        return false;
    }
    else
    {
        return checkSorted(num + 1, n - 1);
    }
}

int main()
{
    int n;
    cin >> n;
    int num[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    if (checkSorted(num, n))
        cout << "True";
    else
        cout << "False";
    return 0;
}