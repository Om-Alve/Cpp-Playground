#include <iostream>
using namespace std;

void printArray(int arr[], int n);
void mergeArray(int a[], int b[], int m, int n, int merge[]);
int main()
{
    int m, n;
    cin >> m;
    int a[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    cin >> n;
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int merge[m + n];
    mergeArray(a, b, m, n, merge);
    printArray(merge, m + n);
    return 0;
}

void mergeArray(int a[], int b[], int m, int n, int merge[])
{
    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if (a[i] < b[j])
        {
            merge[k] = a[i];
            i++;
            k++;
        }
        else
        {
            merge[k] = b[j];
            j++;
            k++;
        }
    }
    while (i < m)
    {
        merge[k] = a[i];
        i++;
        k++;
    }
    while (j < n)
    {
        merge[k] = b[j];
        j++;
        k++;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return;
}