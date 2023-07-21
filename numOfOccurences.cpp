#include <iostream>
#include <vector>
using namespace std;

int first(int s, int e, vector<int> arr, int k);
int last(int s, int e, vector<int> arr, int k);
int occurences(int s, int e, vector<int> arr, int k);

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }
    int k;
    cin >> k;
    cout << occurences(0, n, arr, k);
    return 0;
}

int first(int s, int e, vector<int> arr, int k)
{
    if (s > e)
        return -1;
    int mid = s + (e - s) / 2;
    if (arr[mid] == k)
    {
        int current = mid;
        int f = first(s, mid - 1, arr, k);
        if (f < current && f != -1)
            return f;
        else
            return current;
    }
    else if (arr[mid] > k)
        return first(s, mid - 1, arr, k);
    else
        return first(mid + 1, e, arr, k);
}

int last(int s, int e, vector<int> arr, int k)
{
    if (s > e)
        return -1;
    int mid = s + (e - s) / 2;
    if (arr[mid] == k)
    {
        int current = mid;
        int l = last(mid + 1, e, arr, k);
        if (current > l)
            return current;
        else
            return l;
    }
    else if (arr[mid] > k)
        return last(s, mid - 1, arr, k);
    else
        return last(mid + 1, e, arr, k);
}

int occurences(int s, int e, vector<int> arr, int k)
{
    return last(s, e, arr, k) - first(s, e, arr, k) + 1;
}
