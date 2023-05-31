// Program To Illustrate A Function Returning A Pointer
#include <iostream.h>
#include <conio.h>
int *big(int &, int &); // function prototype
void main()
{
    int a, b, *c;
    cout << "\nEnter two integers";
    cin >> a >> b;
    c = big(a, b);
    cout << "\nThe bigger value is " << *c << endl;
    getch();
}

int *big(int &x, int &y) // function returning pointer
{
    if (x > y)
        return (&x);
    else
        return (&y);
}
