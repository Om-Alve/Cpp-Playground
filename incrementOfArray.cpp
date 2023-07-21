#include <iostream>
#include <vector>
using namespace std;

vector<int> plusOne(vector<int> &digits)
{
    int e = digits.size();
    for (int i = e - 1; i >= 0; i--)
    {
        if (digits[i] < 9)
        {
            digits[i]++;
            return digits;
        }
        else
        {
            digits[i] = 0;
        }
    }
    digits.insert(digits.begin(), 1);
    return digits;
}

int main()
{
    int n;
    cin >> n;
    vector<int> digits;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        digits.push_back(num);
    }
    vector<int> ans = plusOne(digits);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}