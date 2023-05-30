// Program To Check For Spaces
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
	{
        char string[80],spaces=0;
        cout<<"\nEnter a string :";
        gets(string);
        for(int i=0;string[i]!='\0';++i)
            if(string[i]==' ')
                spaces++;
        cout<<"\nNo. of spaces="<<spaces;
        getch();
	}
