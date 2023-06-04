#include <iostream>
using namespace std;

int Multiplication(int Row1, int Col1, int A[10][10], int Row2, int Col2, int B[10][10], int C[10][10])
{
    static int i = 0, j = 0, k = 0;
    if (i >= Row1)
        return 0;

    else if (i < Row1)
    {
        if (j < Col2)
        {
            if (k < Col1)
            {
                C[i][j] += A[i][k] * B[k][j];
                k++;
                Multiplication(Row1, Col1, A, Row2, Col2, B, C);
            }
            k = 0;
            j++;
            Multiplication(Row1, Col1, A, Row2, Col2, B, C);
        }
        j = 0;
        i++;
        Multiplication(Row1, Col1, A, Row2, Col2, B, C);
    }
    return 0;
}

void display(int row, int column, int Array[10][10])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
            cout << Array[i][j] << " ";
        cout << "\n";
    }
}

int main()
{
    int R1, C1, R2, C2, i, j, k, A[10][10], B[10][10], C[10][10] = {0};

    cout << "\n\nEnter Rows and Columns for Matrix A : ";
    cin >> R1 >> C1;
    cout << "Enter Rows and Columns for Matrix B : ";
    cin >> R2 >> C2;
    if (C1 != R2)
        cout << "\nMatrix multiplication is not possible.";
    else
    {
        cout << "Enter elements in Matrix A :";
        for (i = 0; i < R1; i++)
            for (j = 0; j < C1; j++)
                cin >> A[i][j];
        cout << "Enter elements in Matrix B :";
        for (i = 0; i < R2; i++)
            for (j = 0; j < C2; j++)
                cin >> B[i][j];
        cout << "\nMatrix A :\n";
        display(R1, C1, A);
        cout << "Matrix B :\n";
        display(R2, C2, B);
        Multiplication(R1, C1, A, R2, C2, B, C);
    }
    cout << "Resultant Array is:\n";
    display(R1, C2, C);
}
