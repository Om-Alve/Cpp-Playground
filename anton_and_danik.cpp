#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char winner[n];
    for (int i = 0; i < n; i++)
    {
        cin >> winner[i];
    }
    int anton = 0, danik = 0;
    for (int i = 0; i < n; i++)
    {
        if (winner[i] == 'A')
        {
            anton++;
        }
        else
        {
            danik++;
        }
    }
    if (anton > danik)
    {
        cout << "Anton";
    }
    else if (danik > anton)
    {
        cout << "Danik";
    }
    else
    {
        cout << "Friendship";
    }
    return 0;
}