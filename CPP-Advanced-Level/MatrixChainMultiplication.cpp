#include <bits/stdc++.h>
using namespace std;
int MatrixChainOrder(int Arr[], int n)
{
    int m[n][n];
    int i, j, k, L, q;
    for (i = 1; i < n; i++)
        m[i][i] = 0;
    for (L = 2; L < n; L++)
    {
        for (i = 1; i < n - L + 1; i++)
        {
            j = i + L - 1;
            m[i][j] = INT_MAX;
            for (k = i; k <= j - 1; k++)
            {
                q = m[i][k] + m[k + 1][j] + Arr[i - 1] * Arr[k] * Arr[j];
                if (q < m[i][j])
                    m[i][j] = q;
            }
        }
    }
    return m[1][n - 1];
}
int main()
{
    int size;
    int Array[100];
    cout << "\nEnter the size of Array: ";
    cin >> size;
    cout << "\nEnter the values: ";
    for (int i = 0; i < size; i++)
        cin >> Array[i];
    cout << "\n\nMinimum number of Multiplications required: " << MatrixChainOrder(Array, size);
    return 0;
}