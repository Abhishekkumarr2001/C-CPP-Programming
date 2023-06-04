#include <bits/stdc++.h>
using namespace std;
int AssemblyLine(int A[][5], int T[][4], int e[2], int x[2])
{
    int F1[5], F2[5];
    F1[0] = e[0] + A[0][0];
    F2[0] = e[1] + A[1][0];
    for (int j = 1; j < 5; j++)
    {
        F1[j] = min(F1[j - 1] + A[0][j],
                    F2[j - 1] + T[1][j - 1] + A[0][j]);
        F2[j] = min(F2[j - 1] + A[1][j],
                    F1[j - 1] + T[0][j - 1] + A[1][j]);
    }
    return min(F1[4] + x[0], F2[4] + x[1]);
}
int main()
{
    int A[2][5] = {{8, 10, 4, 5, 9}, {9, 6, 7, 5, 6}};
    int T[2][4] = {{2, 3, 1, 3}, {2, 1, 2, 2}};
    int e[2] = {3, 5};
    int x[2] = {2, 1};
    cout << "\n\nOptimal Time for completing the product is: " << AssemblyLine(A, T, e, x);
    return 0;
}
