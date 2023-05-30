// Program To Check Whether The No. Input By User Is Even Or Odd
#include<iostream.h>
#include<conio.h>
void main()
	{
        // clrscr();
        int n;
        cout<<"\nEnter any number:";
        cin>>n;
        if(n%2==0)
            cout<<"\nEven number";
        else
            cout<<"\nOdd number";
        getch();
	}

// Program To Check Whether  Number  Input Is Even Or Odd
// #include<iostream.h>
// #include<conio.h>
// void main()
// 	{
//         clrscr();
//         int num;
//         p:
//         cout<<"\nEnter any number:";
//         cin>>num;
//         if(num>0)
//             if(num%2==0)
//                 cout<<"\nIt is an even number";
//             else
//                 cout<<"\nIt is an odd number";
//         else
//             {
//             cout<<"\nEnter a positive number greater than zero";
//             goto p;
//             }
//         getch();
// 	}