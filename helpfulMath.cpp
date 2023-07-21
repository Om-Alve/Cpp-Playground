#include <bits/stdc++.h>
using namespace std;

int main()
{
    string num;
    cin >> num;
    string n;
    for (int i = 0; i < num.size(); i++)
    {
        if (num[i] != '+')
            n.push_back(num[i]);
    }
    sort(n.begin(), n.end());
    for (int i = 0; i < n.size(); i++)
    {
        cout << n[i];
        if (i >= n.size() - 1)
            break;
        cout << "+";
    }
    return 0;
}
