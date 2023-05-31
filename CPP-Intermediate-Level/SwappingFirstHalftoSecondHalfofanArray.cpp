// Program To Exchange First Half Of Array With Second Half
#include <iostream.h>
#include <conio.h>
void Arr(int a[], int size);

void main()
{
    int a[50], N;
    cout << "\nEnter size of array :";
    cin >> N;
    cout << "\nEner elements of array :";
    for (int i = 0; i < N; i++)
        cin >> a[i];
    Arr(a, N); // Calling Array
    getch();
}

void Arr(int a[], int size)
{
    int temp, j;
    if (size % 2 == 0)
        j = size / 2;
    else
        j = size / 2 + 1;
    for (int i = 0; i < j && j < size; i++, j++)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    cout << "\nContents of array now are given below :\n";
    for (i = 0; i < size; i++)
        cout << a[i] << " ";
}