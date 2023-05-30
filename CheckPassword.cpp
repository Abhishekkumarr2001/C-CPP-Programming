// Program To Check Password
#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<stdio.h>
void main()
	{
        clrscr();
        char pass[20];
        for(int i=0;i<3;i++)
            {
            cout<<"\nEnter password:";
            gets(pass);
            if(strcmp(pass,"PASSWORD"))
                cout<<"\nSorry Incorrect Password!!!!!\n";
            else
                {
                cout<<"\nO.K. You can proceed\n";
                break;
                }
            }
        getch();
	}
