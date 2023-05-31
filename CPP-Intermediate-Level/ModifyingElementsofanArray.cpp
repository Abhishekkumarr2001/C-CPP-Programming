// Program To Replace Array Elements As - Even With Half & Odd With Double Values
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
    for (int i = 0; i < size; i++)
        if (a[i] % 2 == 0)
            a[i] /= 2;
        else
            a[i] *= 2;
    cout << "\nContents of array now are given below :\n";
    for (i = 0; i < size; i++)
        cout << a[i] << " ";
}
