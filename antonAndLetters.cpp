#include <iostream>
#include <set>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    set<char> letters;
    for (int i = 0; i < s.size(); i++)
    {
        if (isalpha(s[i]))
            letters.insert(s[i]);
    }
    cout << letters.size();
    return 0;
}