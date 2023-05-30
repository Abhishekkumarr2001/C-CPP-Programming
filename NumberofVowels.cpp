// Program To Find Number Of Vowels In A Given Line Of Text
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
	{   
        // clrscr();
        char string[80];
        int vov_ctr;
        cout<<"\nEnter string :";
        gets(string);
        for (int i=0;string[i]!='\0';++i)
            {
            switch(string[i])
                {
                case 'a':
                case 'A':
                case 'e':
                case 'E':
                case 'i':
                case 'I':
                case 'o':
                case 'O':
                case 'u':
                case 'U': ++vov_ctr;
                }
            }
        cout<<"\nThe total number of vowels in string="<<vov_ctr;
        getch();
	}