// Program To Replace Every Space In A String With A Hyphen
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
	{
        clrscr();
        char string[80];
        cout<<"\nEnter string :";
        gets(string);
        for (int i=0;string[i]!='\0';++i)
            if(string[i]==' ')
                string[i]='-';
        cout<<"\nThe changes string is :";
        puts(string);
        getch();
	}