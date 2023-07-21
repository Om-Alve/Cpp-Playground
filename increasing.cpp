#include <iostream>
#include <set>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bool found = false;
        int num[n];
        for (int i = 0; i < n; i++)
        {
            cin >> num[i];
        }
        set<int> arr;
        for (int i = 0; i < n; i++)
        {
            if (arr.find(num[i]) != arr.end())
            {
                cout << "NO\n";
                found = true;
                break;
            }
            else
                arr.insert(num[i]);
        }
        if (found == false)
        {
            cout << "YES\n";
        }
    }
    return 0;
}