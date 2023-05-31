// Passing Objects As Function Arguments
#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
    class Distance
{
    int feet, inches;

public:
    void getdata(int f, int i)
    {
        feet = f;
        inches = i;
    }
    void printit(void)
    {
        cout << feet << " feet " << inches << " inches " << endl;
    }
    Distance sum(Distance d2); // add Distance d2 to current Distance object
};
Distance Distance::sum(Distance d2)
{
    Distance d3; // create object d3 of Distance type
    d3.feet = feet + d2.feet + (inches + d2.inches) / 12;
    d3.inches = (inches + d2.inches) % 12;
    return (d3);
}
void main()
{

    clrscr();
    Distance Length1, Length2, total;
    Length1.getdata(17, 6);       // Initializing object Length1
    Length2.getdata(13, 8);       // Initializing obejct Length2
    total = Length1.sum(Length2); // i.e. total=Length1+Length2 (passing object)
    cout << "\nLength1 :";
    Length1.printit();
    cout << "\nLength2 :";
    Length2.printit();
    cout << "\nTotal Length :";
    total.printit();
    getch();
}