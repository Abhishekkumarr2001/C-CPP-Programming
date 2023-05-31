// Program To Implement Binary Search
#include <iostream.h>
#include <conio.h>
    int
    Bsearch(int[], int, int);
void main()
{
    clrscr();
    int AR[50], ITEM, N, index;
    cout << "\nEnter desired array size (max. 50)...";
    cin >> N;
    cout << "\nEnter Array elements(must be sorted in ASC order";
    cout << endl;
    for (int i = 0; i < N; i++)
        cin >> AR[i];
    cout << "\nEnter Element to be searched for...";
    cin >> ITEM;
    index = Bsearch(AR, N, ITEM);
    if (index == -1)
        cout << "\nSorry!! Given element could not be found";
    else
        cout << "\nElement found at index :" << index << ",Position :" << index + 1 << endl;
    getch();
}
int Bsearch(int AR[], int size, int item) // function to perform binary search
{
    int beg, last, mid;
    beg = 0;
    last = size - 1;
    while (beg <= last)
    {
        mid = (beg + last) / 2;
        if (item == AR[mid])
            return mid;
        else if (item > AR[mid])
            beg = mid + 1;
        else
            last = mid - 1;
    }
    return -1;
}
