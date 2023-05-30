// Program To Demonstrate The Usage Of Random Function
#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
void main()
    {
        clrscr();
        randomize();
        int Num, Rndnum;
        cin >> Num;
        Rndnum = random(Num) + 7;
        for (int N = 1; N <= Rndnum; N++)
            cout << N << " ";
        getch();
    }
