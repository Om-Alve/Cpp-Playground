#include <iostream>
using namespace std;

int main()
{
    int n, scores;
    cin >> n;
    cin >> scores;
    n--;
    int amazing(0), min(scores), max(scores);
    while (n != 0)
    {
        cin >> scores;
        if (scores < min)
        {
            amazing++;
            min = scores;
        }
        else if (scores > max)
        {
            amazing++;
            max = scores;
        }
        n--;
    }
    cout << amazing;
    return 0;
}