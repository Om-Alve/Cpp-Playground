#include <iostream>
using namespace std;

string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

void say(long long n)
{
    if (n == 0)
    {
        return;
    }
    say(n / 10);
    cout << arr[n % 10] << " ";
}

int main()
{
    long long n;
    cin >> n;
    say(n);
    return 0;
}