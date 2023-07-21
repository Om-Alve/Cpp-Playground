#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s, int l)
{
    int n = s.length() - 1 - l;
    if (l > n)
        return true;
    if (s[l] != s[n])
        return false;
    else
        return checkPalindrome(s, l + 1);
}

int main()
{
    string s;
    getline(cin, s);
    if (checkPalindrome(s, 0))
        cout << "Palindrome";
    else
        cout << "Not a Palindrome";
    return 0;
}