// Program To Generate Prime No's Between 200 And 700
#include <iostream.h>
#include <conio.h>
void main()
{
    clrscr();
    int flag;
    for (int i = 200; i <= 700; ++i)
    {
        flag = 0;
        for (int j = 2; j <= i / 2; ++j)
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        if (!flag)
            cout << i << " ";
    }
    getch();
}

// // Program To Display The Prime Number Between 100 To 200
// #include <iostream.h>
// #include <conio.h>
// void main()
// {
//     clrscr();
//     int i, j, flag = 1;
//     cout << endl;
//     for (i = 100; i <= 200; ++i)
//     {
//         flag = 1;
//         for (j = 2; j <= i / 2; ++j)
//             if (i % j == 0)
//             {
//                 flag = 0;
//                 break;
//             }
//         if (flag)
//             cout << i << "\t";
//     }
//     getch();
// }
