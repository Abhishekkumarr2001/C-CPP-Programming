// Program Demonstrating Random Access In Files
#include <fstream.h>
#include <conio.h>
void main()
{
    clrscr();
    fstream inout;
    inout.open("Main.dat", ios::in | ios::out);
    char ch;
    inout.seekp(30);
    inout << " It is an automatic machine.";
    inout.seekg(0);
    while (!inout.eof())
    {
        inout.get(ch);
        cout << ch;
    }
    getch();
}

// // Program Demonstrating Random Access In Files
// #include <fstream.h>
// #include <conio.h>
// void main()
// {
//     clrscr();
//     fstream inout;
//     inout.open("Main.dat", ios::in | ios::out);
//     char ch;
//     inout << "Computer is an electronic device which stores and processes raw data.";
//     inout.seekg(20);
//     cout << "\nPosition of reading pointer=";
//     cout << inout.tellg() << endl;
//     while (!inout.eof())
//     {
//         inout.get(ch);
//         cout << ch;
//     }
//     cout << inout.tellg();
//     getch();
// }
