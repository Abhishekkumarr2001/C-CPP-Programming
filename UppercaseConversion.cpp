// Program To Read A String & Convert Into Uppercase
#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include<stdio.h>
void main()
	{
        // clrscr();
        char str[25];
        cout<<"\nEnter a string(max 25 characters):";
        gets(str);
        for(int i=0;str[i]!='\0';i++)
            if(islower(str[i]))
                str[i]=toupper(str[i]);
        cout<<"\nUppercase string is :"<<str;
        getch();
	}
