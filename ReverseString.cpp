// Program To Reverse Strings Entered By The User
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void main()
	{   
        clrscr();
        char string[3][30],ch;
        int len,k;
        cout<<"\nEnter 3 strings:";
        for(int i=0;i<3;++i)
            gets(string[i]);
        cout<<"\nOriginal 3 strings are given below:\n";
        for(i=0;i<3;++i)
            cout<<string[i]<<"\t";
        for(i=0;i<3;++i)
            {
            len=strlen(string[i]);
            for(int j=0,k=len-1;j<len/2;j++,k--)
                {
                ch=string[i][j];
                string[i][j]=string[i][k];
                string[i][k]=ch;
                }
            }
        cout<<"\nThe list of reverse strings are given below:\n";
        for(i=0;i<3;++i)
            cout<<string[i]<<"\t";
        getch();
	}

// Program To Reverse A String
// #include<iostream.h>
// #include<conio.h>
// #include<stdio.h>
// #include<string.h>
// void main()
// 	{
//         clrscr();
//         char string1[80],string2[80];
//         cout<<"\nEnter string :";
//         gets(string1);
//         for (int i=(strlen(string1)-1),j=0;i>=0;--i,++j)
//             string2[j]=string1[i];
//         string2[j+1]='\0';
//         cout<<"\nReverse of give string is : ";
//         puts(string2);
//         getch();
// 	}
