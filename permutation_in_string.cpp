#include <bits/stdc++.h>
using namespace std;

bool checkequal(int a[], int b[]);
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int count1[26];
    for (int i = 0; i < s1.length(); i++)
    {
        int index = s1[i] - 'a';
        count1[index]++;
    }
    int count2[26];
    int i = 0;
    int windowSize = s1.length();
    while (i < windowSize && i < s2.length())
    {
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }
    if (checkequal(count1, count2))
    {
        cout << "false";
        return 1;
    }
    while (i < s2.length())
    {
        char newChar = s2[i];
        int index = newChar - 'a';
        count2[index]++;
        char oldChar = s2[i - windowSize];
        index = oldChar - 'a';
        count2[index]--;
        i++;
        if (checkequal(count1, count2))
        {
            cout << "false";
            return 1;
        }
    }
    cout << "true";
    return 0;
}

bool checkequal(int a[], int b[])
{
    for (int i = 0; i < 26; i++)
    {
        if (a[i] != b[i])
        {
            return 0;
        }
    }
    return 1;
}