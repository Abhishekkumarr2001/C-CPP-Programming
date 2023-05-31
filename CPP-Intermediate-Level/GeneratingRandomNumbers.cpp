// Program To Generate Random Numbers
#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
    // clrscr();
    int rnum, i;
    for (i = 0; i < 5; ++i)
        cout << (rnum = rand()) << endl;
    getch();
}

// // Program Demonstrating Usage Of Random Function
// #include <iostream.h>
// #include <stdlib.h>
// #include <conio.h>
// void main()
// {
//     // clrscr();
//     randomize();
//     int Num, Rndnum;
//     cout << "\nEnter any number:";
//     cin >> Num;
//     Rndnum = random(Num) + 7;
//     for (int N = 1; N <= Rndnum; N++)
//         cout << N << " ";
//     getch();
// }