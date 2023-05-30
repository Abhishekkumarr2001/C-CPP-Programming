// Program To Check If a String Is Palindrome Or Not
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
	{
        clrscr();
        char string[80];
        int len,flag=1;
        cout<<"\nEnter string (max. 79 characters) :";
        gets(string);
        len=strlen(string);
        for(int i=0,j=len-1; i<len/2; i++, j--)
            {
            if(string[i]!=string[j])
                {
                flag=0;
                break;
                }
            }
        if(flag)
            cout<<"\nIt is palindrome";
        else
            cout<<"\nIt is not palindrome";
        getch();
	}