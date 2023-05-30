// Program To Compare Three No's and Printing Largest No.
#include<iostream.h>
#include<conio.h>
void main()
	{
        clrscr();
        int x,y,z,max;
        cout<<"\nEnter three numbers:";
        cin>>x>>y>>z;
        max=x;
        if(y>max)
            max=y;
        if(z>max)
            max=z;
        cout<<"\nThe largest of "<<x<<","<<y<<" and "<<z<<" is "<<max;
        getch();
	}