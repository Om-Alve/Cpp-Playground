#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> text(n);
    for (int i = 0; i < n; i++)
    {
        string word;
        cin >> word;
        text[i].assign(word);
    }
    for (int i = 0; i < n; i++)
    {
        if (text[i].size() > 10)
        {
            int mid = (text[i].size() - 2);
            cout << text[i].front() << mid << text[i].at(text[i].size() - 1) << endl;
        }
        else
        {
            cout << text[i] << endl;
        }
    }
    return 0;
}