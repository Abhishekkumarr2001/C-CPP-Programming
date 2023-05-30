// Program That Reads A String And Converts It Into Uppercase
#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include<stdio.h>
void main()
	{  
        // clrscr();
        char str[25];
        int flag=1;
        cout<<"\nEnter a string (max 25 characters)";
        gets(str);
        for(int i=0;str[i]!='\0';i++)
            {            if(isupper(str[i]))
                {
                flag=0;
                cout<<str[i]<<" is already in uppercase ";
                }
            else if(islower(str[i]))
                {  flag=1;
                str[i]=toupper(str[i]);
                }
            }
        if((flag==1)||(str[i]=='\0'))
            {   cout<<"\n\nUppercase string is :\n";
            puts(str);
            }
        getch();
	}