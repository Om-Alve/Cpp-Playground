#include <bits/stdc++.h>
using namespace std;

int main()
{
    string text = {'H', 'i', ' ', 'O', 'm', ' ', 'A', 'l', 'v', 'e'};
    // cin >> text;
    int s = 0, e, n;
    n = text.length();
    int i = 0;
    for (int i = 0; i <= n; i++)
    {
        if (text[i] == ' ' || text[i] == '\0')
        {
            e = i - 1;
            while (s < e)
            {
                swap(text[s], text[e]);
                s++;
                e--;
            }
            s = i + 1;
        }
    }
    cout << text;
    return 0;
}