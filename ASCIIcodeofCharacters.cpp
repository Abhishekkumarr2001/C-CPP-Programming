// Program To Display ASCII Code Of a Character And Vice Versa.
#include<iostream.h>
#include<conio.h>
void main()
	{
        // clrscr();
        char ch='A';
        int num=ch;
        cout<<"\nThe ASCII code for "<<ch<<" is "<<num;
        cout<<"\n\nAdding 1 to the character code:";
        ch=ch+1;
        num=ch;
        cout<<"\n\nThe ASCII code for "<<ch<<" is "<<num;
        getch();
    }
