// Program Demonstrating Mathematical Function Sin(), Cos()
#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
	{
        clrscr();
        double angle,value;
        cout<<"\nEnter the angle:";
        cin>>angle;
        value=sin(angle);
        cout<<"\nsin("<<angle<<")="<<value<<endl;
        value=cos(angle);
        cout<<"\ncos("<<angle<<")="<<value<<endl;
        getch();
	}
