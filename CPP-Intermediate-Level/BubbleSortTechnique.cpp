// Program To Implement Bubble Sort Technique
#include <iostream.h>
#include <conio.h>
void BubbleSort(int[], int); // function for Bubble Sort
void main()
{
    clrscr();
    int AR[50], ITEM, N, index;
    cout << "\nEnter desired array size (max. 50)...";
    cin >> N;
    cout << "\nEnter Array elements.......";
    cout << endl;
    for (int i = 0; i < N; i++)
        cin >> AR[i];
    BubbleSort(AR, N);
    cout << "\nThe sorted array is given below...";
    for (i = 0; i < N; i++)
        cout << AR[i] << " ";
    getch();
}

void BubbleSort(int AR[], int size) // function to perform Bubble sorting
{
    int tmp, ctr = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < (size - 1) - i; j++)
            if (AR[j] > AR[j + 1])
            {
                tmp = AR[j];
                AR[j] = AR[j + 1];
                AR[j + 1] = tmp;
            }
        cout << "\nArray after iteration - " << ++ctr << " - is : ";
        for (int k = 0; k < size; k++)
            cout << AR[k] << " ";
        cout << endl;
    }
}