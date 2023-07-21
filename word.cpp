#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;

int main()
{
    string word;
    cin >> word;
    int upp = 0, low = 0;
    for (int i = 0; i < word.length(); i++)
    {
        if (isupper(word[i]))
        {
            upp++;
        }
        else
        {
            low++;
        }
    }
    if (upp > low)
    {
        for (int i = 0; i < word.length(); i++)
        {
            char ch;
            ch = toupper(word[i]);
            cout << ch;
        }
    }
    else
    {
        for (int i = 0; i < word.length(); i++)
        {
            char ch;
            ch = tolower(word[i]);
            cout << ch;
        }
    }
    return 0;
}