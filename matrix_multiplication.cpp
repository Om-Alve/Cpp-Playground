#include <iostream>
using namespace std;

int multiply(int a, int b);
int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int a[n1][n2];
    int b[n2][n3];
    int c[n1][n3];
    // Getting first matrix
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin >> a[i][j];
        }
    }
    // Getting second matrix
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cin >> b[i][j];
        }
    }
    // Initializing answer matrix from 0
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            c[i][j] = 0;
        }
    }
    // Multiplying the two matrices
    for (int i = 0; i < n1; i++) // Iterating over rows of first matrix
    {

        for (int j = 0; j < n3; j++) // Iterating over coloumns of second matrix
        {
            for (int k = 0; k < n2; k++) // Iterating over the columns of first matrix and rows of second matrix
            {
                c[i][j] += a[i][k] * b[k][j];
            }
            cout << c[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}