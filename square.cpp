#include <iostream>
using namespace std;

int main()
{
    int side;
    cin >> side;
    int row = 1;
    // for printing 'n' rows
    while (row <= side)
    {
        int column = 1;
        // For printing 'n' stars per row
        while (column <= side)
        {
            cout << "* ";
            column++; // or you can use column+=1; or column=column+1;
        }
        // line break after each row
        cout << endl;
        row++;
    }
    return 0;
}