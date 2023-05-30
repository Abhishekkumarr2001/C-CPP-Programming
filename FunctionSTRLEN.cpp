// Program Demonstrating strlen() Function
#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
	{
        clrscr();
        char *str1="computer is an electronic device";
        int noofchar=0;
        noofchar=strlen(str1);
        cout<<"\nThe total number of characters in str1="<<noofchar;
        getch();
	}
