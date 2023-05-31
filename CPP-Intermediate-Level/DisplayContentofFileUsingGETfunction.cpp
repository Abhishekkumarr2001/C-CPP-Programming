// Program To Dispay Contents Of A File Using  get() Function
#include <fstream.h>
#include <conio.h>
int main()
{
    clrscr();
    char ch;
    ifstream fin;
    fin.open("marks.dat", ios::in);
    if (!fin)
    {
        cout << "Cannot open file!\n";
        return 1;
    }
    while (!fin.eof()) // detecting end of file using eof() function
    {
        fin.get(ch);
        cout << ch;
    }
    fin.close();
    getch();
    return 0;
}