#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s1;
    cin >> s1;
    int distinctChar = s1.length();
    for (int i = 0; i < s1.length(); i++)
    {
        for (int j = i + 1; j < s1.length(); j++)
        {
            if (s1[i] == '#')
            {
                continue;
            }
            if (s1[i] == s1[j])
            {
                s1[j] = '#';
                distinctChar--;
            }
        }
    }

    if (distinctChar % 2 == 0 && distinctChar > 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
    return 0;
}