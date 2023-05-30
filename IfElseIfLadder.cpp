// Program Demonstrating Working Of if...Else...if  Ladder
#include<iostream.h>
#include<conio.h>
void main()
	{
        clrscr();
        char ch;
        cout<<"\nEnter a character:";
        cin>>ch;
        if(ch>=48&&ch<=57)
            cout<<"\nYou entered a digit";
        else if(ch>=65 && ch<=90)
            cout<<"\nYou enetered an uppercase character";
        else if(ch>=97 && ch<=122)
            cout<<"\nYou entered a lowercase character";
        else
            cout<<"\nYou entered a special character";
        getch();
	}
