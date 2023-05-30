// Program to Print Largest Number
#include<iostream.h>
#include<conio.h>
void setlarge(int &a,int &b);
void main()
	{
        int a,b;
        cout<<"\nEnter the values for a and b:";
        cin>>a>>b;
        setlarge(a,b);
        cout<<"\n\na="<<a<<"\tb="<<b;
        getch();
	}

void setlarge(int &a,int &b)
	{
        if(a>b)
            a=-1;
        else
            b=-1;
	}