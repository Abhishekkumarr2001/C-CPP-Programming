// Program Demonstrating Invoking Functions By Passing The Pointers
#include <iostream.h>
#include <conio.h>
void exchange(int *, int *);
void main()
{
    int a, b;
    cout << "\nEnter any two no's:";
    cin >> a >> b;
    // clrscr();
    cout << "\nValues of a and b before calling exchange function:";
    cout << "a = " << a << "\t"
         << " b = " << b << endl;
    exchange(&a, &b); // calling exchange function
    cout << "\nValues of a and b after calling exchange function:";
    cout << "a = " << a << "\t"
         << " b =" << b << endl;
    getch();
}
void exchange(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
