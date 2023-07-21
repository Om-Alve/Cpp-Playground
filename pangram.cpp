#include <bits/stdc++.h>
#include <ctype.h>
using namespace std;

int main()
{
    char j = 'a';
    int n;
    cin >> n;
    string text;
    cin >> text;
    for (int i = 0; i < n; i++)
    {
        text[i] = tolower(text[i]);
    }
    if (n < 26)
    {
        cout << "NO";
        return 0;
    }
    for (int i = 0; i < 26; i++)
    {
        if (text.find(j) != -1)
        {
            j++;
        }
        else
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}