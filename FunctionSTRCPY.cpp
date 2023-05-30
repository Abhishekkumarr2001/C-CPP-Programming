// Program Demonstrating strcpy() Function
#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
	{
        clrscr();
        char *str1="electronic device";
        char *str2="computer is an";
        int res;
        strcpy(str1,str2);   //copies contents of str2 to str1
        cout<<str1;
        getch();
	}
