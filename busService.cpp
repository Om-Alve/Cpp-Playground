#include <iostream>
using namespace std;

int main()
{
    int passengers;
    cin >> passengers;
    while (passengers > 50)
    {
        passengers -= 50;
    }
    int empty_seats = 50 - passengers;
    cout << empty_seats;
    cout << endl;
    return 0;
}