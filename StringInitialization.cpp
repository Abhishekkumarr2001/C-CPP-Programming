// Program Demonstrating String Initialization
#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
	{
        clrscr();
        char string[15]="Computer";
        char string2[]={'C','o','m','p','u','t','e','r','\0'};
        char names[3][10]={"Amit","Kunal","Manish"};
        cout<<string<<endl;
        cout<<string2<<endl;
        cout<<names[0]<<"\t"<<names[1]<<"\t"<<names[2]<<endl;
        getch();
	}