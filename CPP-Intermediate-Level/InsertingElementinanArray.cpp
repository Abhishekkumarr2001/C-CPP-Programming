Program To Insert An Element In An Array
#include <iostream.h>
#include <conio.h>
#include <process.h>
int FindPos(int[], int, int); // function to determine position for new ele.

void main()
{
    int AR[5], ITEM, N, index;
    cout << "\nEnter desired array size (max. 50)...";
    cin >> N;
    cout << "\nEnter Array elements(must be sorted in ASC order";
    cout << endl;
    for (int i = 0; i < N; i++)
        cin >> AR[i];
    char ch = 'y';
    while (ch == 'y' || ch == 'Y')
    {
        cout << "\nEnter Element to be inserted...";
        cin >> ITEM;
        if (N == 5)
        {
            cout << "Overflow!!";
            exit(1);
        }
        index = FindPos(AR, N, ITEM);
        for (i = N; i > index; i--)
        {
            AR[i] = AR[i - 1]; // shifting elements
        }
        AR[index] = ITEM; // item inserted
        N += 1;
        cout << "\nWant to insert more elements?(y/n)..";
        cin >> ch;
    }
    for (i = 0; i < N; i++)
        cout << AR[i] << " ";
    cout << endl;
    getch();
}

int FindPos(int AR[], int size, int item) // function to find position of item
{
    int pos;
    if (item < AR[0])
        pos = 0;
    else
    {
        for (int i = 0; i < size - 1; i++)
            if (AR[i] <= item && item < AR[i + 1])
            {
                pos = i + 1;
                break;
            }
        if (i == size - 1)
            pos = size;
    }
    return pos;
}
