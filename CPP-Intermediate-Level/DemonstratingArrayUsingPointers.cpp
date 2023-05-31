// Program Demonstrating Array Using Pointers
#include <iostream.h>
#include <conio.h>
void main()
{
    int *ptr;
    int a[5];
    cout << "\nEnter elements of array:";
    for (int i = 0; i < 5; i++)
        cin >> a[i];
    ptr = a;
    for (i = 0; i < 5; i++, ptr++)
        cout << *ptr << "\t";
    getch();
}
