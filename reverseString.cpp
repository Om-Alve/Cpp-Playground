#include <bits/stdc++.h>
using namespace std;

void reverse(string &txt, int s)
{
    int n = txt.length() - 1 - s;
    if (s > n)
        return;
    swap(txt[s], txt[n]);
    reverse(txt, s + 1);
}

int main()
{
    string txt;
    getline(cin, txt);
    reverse(txt, 0);
    cout << txt << endl;
    return 0;
}