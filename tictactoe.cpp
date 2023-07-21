#include <iostream>
using namespace std;

int main()
{
    int arr[3][3];
    // Input
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    // Row and Columns
    for (int i = 0; i < 3; i++)
    {
        if (arr[i][0] == arr[i][1] && arr[i][0] == arr[i][2])
        {
            cout << arr[i][0] << " Wins!";
            return 0;
        }
        if (arr[0][i] == arr[1][i] && arr[0][i] == arr[2][i])
        {
            cout << arr[0][i] << " Wins!";
            return 0;
        }
    }
    // Diagonals
    int i = 0, j;
    if (arr[i][i] == arr[++i][++i] && arr[0][0] == arr[++i][++i])
    {
        cout << arr[i][i] << " Wins!";
        return 0;
    }
    i = 0, j = 2;
    if (arr[i][j] == arr[++i][--j] && arr[i][j] == arr[++i][--j])
    {
        cout << arr[i][j] << " Wins!";
        return 0;
    }
    // If no matches are found
    cout << "Tie!";
    return 0;
}