// Program To Demonstrate Relational Operators (<, >, <=, >=, !=, ==)
#include <iostream.h>
#include <conio.h>
void main()
{
    clrscr();
    int a, b;
    cout << "\nEnter any two no's:";
    cin >> a >> b;
    cout << "\nExpression\tResult" << endl;
    cout << "\n\na < b\t\t" << (a < b);
    cout << "\n\na > b\t\t" << (a > b);
    cout << "\n\na <= b\t\t" << (a <= b);
    cout << "\n\na >= b\t\t" << (a >= b);
    cout << "\n\na != b\t\t" << (a != b);
    cout << "\n\na == b\t\t" << (a == b);
    getch();
}
