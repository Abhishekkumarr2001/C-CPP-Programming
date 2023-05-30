// Program Demonstrating Mathematical Function Log() & Log10()
#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
	{
        clrscr();
        double x,r;
        x=70.293;
        r=log(x);
        cout<<"\nlog(70.293)="<<r<<endl;
        //usage of log10()
        r=log10(x);
        cout<<"\nlog10(70.293)="<<r<<endl;
        getch();
	}