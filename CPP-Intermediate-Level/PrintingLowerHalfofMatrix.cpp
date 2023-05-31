// To Print The Lower Half of Matrices
#include <iostream.h>
#include <conio.h>
void Arr(int a[], int size);

void main()
{
    int a[10], N;
    cout << "\nEnter size of array :";
    cin >> N;
    cout << "\nEnter elements of array :";
    for (int i = 0; i < N; i++)
        cin >> a[i];
    Arr(a, N); // Calling Array
    getch();
}

void Arr(int a[], int size)
{
    int b[10][10];
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            if (i >= j)
                b[i][j] = a[j];
            else
                b[i][j] = 0;
    cout << "\nElement of array b :\n";
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
            cout << b[i][j] << " ";
        cout << endl;
    }
}