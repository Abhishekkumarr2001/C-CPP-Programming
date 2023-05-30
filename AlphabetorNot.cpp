// Program To Check Whether Given Character Is Alphabet Or Not
#include<iostream.h>
#include<conio.h>
#include<ctype.h>
void main()
	{
        // clrscr();
        char ch;
        cout<<"\nEnter a character :";
        cin>>ch;
        if(isalpha(ch))
            {
            if(islower(ch))
                cout<<"\nLowercase alphabet";
            else
                cout<<"\nUppercase alphabet";
            }
        else
            cout<<"\nNot an alphabet";
        getch();
	}
