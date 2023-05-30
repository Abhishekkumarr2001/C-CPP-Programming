// Program Demonstrating strcmp() Function
#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
	{
        clrscr();
        char *str1="computer";
        char *str2="computer";
        int res;
        res=strcmp(str2,str1);
        cout<<res<<endl;
        getch();
	}