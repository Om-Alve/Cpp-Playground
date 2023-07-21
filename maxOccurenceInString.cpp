#include <bits/stdc++.h>
using namespace std;

int main()
{
    string text;
    cin >> text;
    int n = text.length();
    int maxOccurence = -1;
    char c;
    for (int i = 0; i < n; i++)
    {
        int occurence = 1;
        maxOccurence = max(maxOccurence, occurence);
        for (int j = i + 1; j < n; j++)
        {
            if (text[j] == text[i])
            {
                occurence++;
            }
        }
        if (occurence > maxOccurence)
        {
            c = text[i];
        }
    }
    cout << c;
    return 0;
}