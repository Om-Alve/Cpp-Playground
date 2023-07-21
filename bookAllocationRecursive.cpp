#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> books, int mid, int m)
{
    int s = 1, sum = 0;
    for (int i = 0; i < books.size(); i++)
    {
        sum += books[i];
        if (books[i] > mid)
            return false;
        if (sum > mid)
        {
            s++;
            sum = books[i];
        }
    }
    if (s > m)
        return false;
    else
        return true;
}
int findmin(int l, int h, vector<int> books, int m)
{
    if (l > h)
        return -1;
    int mid = l + (h - l) / 2;
    if (isPossible(books, mid, m))
    {
        int current = mid;
        cout << mid << " ";
        int mini = findmin(l, mid - 1, books, m);
        if (mini < current && mini != -1)
            return mini;
        else
            return current;
    }
    else
        return findmin(mid + 1, h, books, m);
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> books;
    int high = 0;
    for (int i = 0; i < n; i++)
    {
        int b;
        cin >> b;
        high += b;
        books.push_back(b);
    }
    int l = 0;
    cout << findmin(l, high, books, m);
    return 0;
}