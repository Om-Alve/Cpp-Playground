#include <bits/stdc++.h>
using namespace std;

int main()
{
    string text;
    getline(cin, text);
    string temp = "";
    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] == ' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {
            temp.push_back(text[i]);
        }
    }
    cout << temp;
    return 0;
}