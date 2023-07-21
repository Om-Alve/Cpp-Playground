#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        int temp = rand();
        cout << temp << endl;
        if (temp % 2 == 0)
        {
            cout << "Heads";
        }
        else
        {
            cout << "Tails";
        }
    }

    return 0;
}