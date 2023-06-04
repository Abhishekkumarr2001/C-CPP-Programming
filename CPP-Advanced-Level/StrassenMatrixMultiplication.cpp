#include <iostream>
using namespace std;

int main()
{
    int Array1[2][2], Array2[2][2], Array3[2][2], j, k;
    int M1, M2, M3, M4, M5, M6, M7;

    cout << "\nEnter the 4 elements of 1st matrix: ";
    for (j = 0; j < 2; j++)
        for (k = 0; k < 2; k++)
            cin >> Array1[j][k];
    cout << "Enter the 4 elements of 2nd matrix: ";
    for (j = 0; j < 2; j++)
        for (k = 0; k < 2; k++)
            cin >> Array2[j][k];
    cout << "\n1st matrix is:\n";
    for (j = 0; j < 2; j++)
    {
        for (k = 0; k < 2; k++)
            cout << Array1[j][k] << " ";
        cout << "\n";
    }
    cout << "\n2nd matrix is:\n";
    for (j = 0; j < 2; j++)
    {
        for (k = 0; k < 2; k++)
            cout << Array2[j][k] << " ";
        cout << "\n";
    }

    M1 = (Array1[0][0] + Array1[1][1]) * (Array2[0][0] + Array2[1][1]);
    M2 = (Array1[1][0] + Array1[1][1]) * Array2[0][0];
    M3 = Array1[0][0] * (Array2[0][1] - Array2[1][1]);
    M4 = Array1[1][1] * (Array2[1][0] - Array2[0][0]);
    M5 = (Array1[0][0] + Array1[0][1]) * Array2[1][1];
    M6 = (Array1[1][0] - Array1[0][0]) * (Array2[0][0] + Array2[0][1]);
    M7 = (Array1[0][1] - Array1[1][1]) * (Array2[1][0] + Array2[1][1]);
    Array3[0][0] = M1 + M4 - M5 + M7;
    Array3[0][1] = M3 + M5;
    Array3[1][0] = M2 + M4;
    Array3[1][1] = M1 - M2 + M3 + M6;

    cout << "\nResultant Array using Strassen's Algorithm:\n";
    for (j = 0; j < 2; j++)
    {
        for (k = 0; k < 2; k++)
            cout << Array3[j][k] << "  ";
        cout << "\n";
    }
    return 0;
}