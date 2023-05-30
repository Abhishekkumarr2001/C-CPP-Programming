// Program To Check Whether A Number Is Prime Or Not.
#include<iostream.h>
#include<process.h>
#include<conio.h>
void main()
	{
        clrscr();
        int num,i;
        cout<<"\nEnter the number:";
        cin>>num;
        for(i=2;i<=num/2;++i)
            if(num%i==0)
                {
                cout<<"\nNot a prime number ";
                exit(0);
                }
        cout<<"\nIt is a prime number";
        getch();
	}