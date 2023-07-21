#include <iostream>
#include <vector>
using namespace std;

vector<int> sum(vector<int> a, vector<int> b);
void printVector(vector<int> a);

int main()
{
    int n, m;
    cin >> n >> m;
    int num;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        a.push_back(num);
    }
    vector<int> b;
    for (int i = 0; i < m; i++)
    {
        cin >> num;
        b.push_back(num);
    }
    vector<int> ans = sum(a, b);
    printVector(ans);
    return 0;
}

vector<int> sum(vector<int> a, vector<int> b)
{
    int n = a.size() - 1;
    int m = b.size() - 1;
    vector<int> ans;
    int carry = 0, sum = 0;
    while (m >= 0 && n >= 0)
    {
        sum = (a[n] + b[m]) + carry;
        carry = sum / 10;
        sum %= 10;
        ans.push_back(sum);
        n--;
        m--;
    }
    while (n >= 0)
    {
        sum = a[n] + carry;
        carry = sum / 10;
        ans.push_back(sum % 10);
        n--;
    }
    while (m >= 0)
    {
        sum = b[m] + carry;
        carry = sum / 10;
        ans.push_back(sum % 10);
        m--;
    }
    while (carry != 0)
    {
        // carry %= 10;
        ans.push_back(carry);
        break;
    }
    return ans;
}
void printVector(vector<int> a)
{
    for (int i = a.size() - 1; i >= 0; i--)
    {
        cout << a[i] << " ";
    }
    return;
}