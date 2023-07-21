#include <bits/stdc++.h>
using namespace std;

bool isPossible(int mid, int m, vector<int> stalls)
{
    int cows = 1, distance = 0, lastpos = stalls[0];
    for (int i = 0; i < stalls.size(); i++)
    {
        distance = abs(lastpos - stalls[i]);
        if (distance >= mid)
        {
            cows++;
            if (cows == m)
                return true;
            lastpos = stalls[i];
        }
    }
    return false;
}

int maxDistance(int l, int h, vector<int> stalls, int m)
{
    if (l > h)
        return -1;
    int mid = l + (h - l) / 2;
    if (isPossible(mid, m, stalls))
    {
        int curr = mid;
        int maxi = maxDistance(mid + 1, h, stalls, m);
        if (maxi > curr && maxi != -1)
            return maxi;
        else
            return curr;
    }
    else
        return maxDistance(l, mid - 1, stalls, m);
}

int main()
{
    int n, m;
    cin >> n >> m;
    int mini = -1, maxi = 100000;
    vector<int> stalls;
    for (int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        mini = min(mini, c);
        maxi = max(maxi, c);
        stalls.push_back(c);
    }
    sort(stalls.begin(), stalls.end());
    int h = maxi - mini;
    cout << maxDistance(0, h, stalls, m);
    return 0;
}