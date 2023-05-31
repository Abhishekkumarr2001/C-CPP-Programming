// Program To Implement Selection Sort Technique
#include <iostream.h>
#include <conio.h>
void SelSort(int[], int); // function for selectino sort
void main()
{
    // clrscr();
    int AR[50], ITEM, N, index;
    cout << "\nEnter desired array size (max. 50)...";
    cin >> N;
    cout << "\nEnter Array elements.......";
    cout << endl;
    for (int i = 0; i < N; i++)
        cin >> AR[i];
    SelSort(AR, N);
    cout << "\nThe sorted array is given below...";
    for (int i = 0; i < N; i++)
        cout << AR[i] << " ";

    getch();
}

void SelSort(int AR[], int size) // function to perform selection sorting
{
    int small, pos, tmp;
    for (int i = 0; i < size - 1; i++)
    {
        small = AR[i];
        pos = i;
        for (int j = i + 1; j < size; j++)
            if (AR[j] < small)
            {
                small = AR[j];
                pos = j;
            }
        tmp = AR[i];
        AR[i] = AR[pos];
        AR[pos] = tmp;
        cout << "\nArray after pass - " << i + 1 << " - is :";
        for (int j = 0; j < size; j++)
            cout << AR[j] << " ";
        cout << endl;
    }
}