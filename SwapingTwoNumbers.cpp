// Program To Exchange The Values Of Two Variables
#include<iostream.h>
#include<conio.h>
void main()
	{
        // clrscr();
        signed long int a,b,temp;
        cout<<"\nEnter the values for a and b:";
        cin>>a>>b;
        cout<<"\nValues of a and b before exchange:";
        cout<<"\n\na="<<a;
        cout<<"\n\nb="<<b;
        temp=a;
        a=b;
        b=temp;
        cout<<"\n\nValues of a and b after exchange:";
        cout<<"\n\na="<<a;
        cout<<"\n\nb="<<b;
        getch();
	}