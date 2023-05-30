// Program That Checks Whether The Given Character Is Alphanumeric Or A Digit
#include<iostream.h>
#include<conio.h>
#include<ctype.h>
void main()
	{
        // clrscr();
        char ch;
        int a;
        cout<<"\nEnter a character:";
        cin>>ch;
        a=ch;
        if(isalnum(a))
            {
            cout<<"\nAlphanumeric character";
            if(isdigit(a))
                cout<<"\n\nAnd digit character";
            else if(isalpha(a))
                cout<<"\n\nAnd Aphabetic character";
            }
        else
            cout<<"\nOther character";
        getch();
	}
