#include <iostream.h>
#include <conio.h>
#include <stdio.h>
class Base
{
public:
    int a;
};
class D1 : virtual public Base
{
public:
    int b;
};
class D2 : virtual public Base
{
public:
    int c;
};
class D3 : public D1, public D2
{
public:
    int total;
};
void main()
{
    clrscr();
    D3 ob;
    ob.a = 25;
    ob.b = 50;
    ob.c = 75;
    ob.total = ob.a + ob.b + ob.c;
    cout << ob.a << "\t" << ob.b << "\t" << ob.c << "\t" << ob.total << endl;
    getch();
}
