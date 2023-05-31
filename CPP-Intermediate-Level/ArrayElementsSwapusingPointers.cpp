// Program To Exchange The Positions Of Strings Stored In Array Using Pointers
#include <iostream.h>
#include <conio.h>
void main()
{
    char *name[] = {"Sachin", "Kapil", "Ajay", "Sunil", "Amit"};
    cout << "\nOriginally string 2 is :";
    cout << name[1] << endl;
    cout << "\nand String 4 is :";
    cout << name[3] << endl;
    char *t;
    t = name[1];
    name[1] = name[3];
    name[3] = t;
    // print exchanged values
    cout << "\nExchanged string 2 is :" << name[1] << endl;
    cout << " and string 4 is :" << name[3] << endl;
    getch();
}
