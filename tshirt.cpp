#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string t1;
        string t2;
        cin >> t1 >> t2;
        int s1 = 0, s2 = 0;
        if (t1.find('S') != -1)
        {
            s1 -= t1.length();
        }
        else if (t1.find('L') != -1)
        {
            s1 += t1.length();
        }
        else
            s1 = 0;
        if (t2.find('S') != -1)
        {
            s2 -= t2.length();
        }
        else if (t2.find('L') != -1)
        {
            s2 += t2.length();
        }
        else
            s2 = 0;
        if (s1 > s2)
            cout << ">\n";
        else if (s1 < s2)
            cout << "<\n";
        else
            cout << "=\n";
    }
    return 0;
}