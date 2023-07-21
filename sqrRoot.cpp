#include <iostream>
using namespace std;

// double sqr_root(int k, int precision);
int sqr_root(int s, int e, int k);
double calculate(int precision, int k);

int main()
{
    int key, precision;
    cin >> key >> precision;
    cout << "Square Root is " << calculate(precision, key);
    // cout << sqr_root(key, precision);
    return 0;
}

// double sqr_root(int k, int precision)
// {
//     int s = 0, e = k;
//     long long int mid = s + (e - s) / 2;
//     double root = -1;

//     while (s <= e)
//     {
//         long long int square = mid * mid;
//         if (square == k)
//         {
//             return mid;
//         }
//         if (square < k)
//         {
//             root = mid;
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid - 1;
//         }
//         mid = s + (e - s) / 2;
//     }

//     float factor = 1;
//     double ans = 0;
//     for (int i = 0; i < precision; i++)
//     {
//         factor /= 10;
//         for (double j = root; j * j < k; j += factor)
//         {
//             ans = j;
//         }
//     }
//     return ans;
// }

int sqr_root(int s, int e, int k)
{
    if (s > e)
        return -1;
    int mid = s + (e - s) / 2;
    long long int square = mid * mid;
    if (square == k)
    {
        return mid;
    }
    else if (square < k)
    {
        int root = sqr_root(mid + 1, e, k);
        if (root > mid && root != -1)
            return root;
        else
            return mid;
    }
    else
        return sqr_root(s, mid - 1, k);
}
double calculate(int precision, int k)
{
    float factor = 1;
    double ans = 0;
    int root = sqr_root(0, k, k);
    for (int i = 0; i < precision; i++)
    {
        factor /= 10;
        for (double j = root; j * j < k; j += factor)
        {
            ans = j;
        }
    }
    return ans;
}