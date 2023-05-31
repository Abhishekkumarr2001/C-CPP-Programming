// Program To Search For A Specific Element In A 1-D Array (Linear Search)
#include <iostream.h>
#include <conio.h>
void main()
{
    int A[20], size, i, flag = 0, num, pos;
    cout << "\nEnter the number of elements in the array :";
    cin >> size;
    cout << "\nEnter the elements of array  :";
    for (i = 0; i < size; ++i)
        cin >> A[i];
    cout << "\nEnter the elements to be searched for :";
    cin >> num;
    for (i = 0; i < size; ++i)
        if (A[i] == num)
        {
            flag = 1;
            pos = i;
            break;
        }
    if (flag == 0)
        cout << "\nElement not found";
    else
        cout << "\nElement found at position " << pos + 1;
    getch();
}
