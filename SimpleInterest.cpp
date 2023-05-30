// Program To Find Simple Interest
#include<iostream.h>
#include<conio.h>
void main()
	{
        clrscr();
        float p,r,t,si;
        cout<<"\nEnter the principle amount:";
        cin>>p;
        cout<<"\nEnter rate:";
        cin>>r;
        cout<<"\nEnter time:";
        cin>>t;
        si=(p*r*t)/100;
        cout<<"\nSimple Interest="<<si;
        getch();
	}