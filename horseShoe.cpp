#include <bits/stdc++.h>
using namespace std;

int main()
{
    int horseShoe[4];
    vector<bool> found(4, false);
    for (int i = 0; i < 4; i++)
    {
        cin >> horseShoe[i];
    }
    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        if (found[i] == false)
        {
            for (int j = i + 1; j < 4; j++)
            {
                if (horseShoe[i] == horseShoe[j])
                {
                    found[j] = true;
                    count++;
                }
            }
        }
    }
    cout << count;
    return 0;
}