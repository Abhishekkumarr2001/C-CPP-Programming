// Program Demonstrating Passing Structures By Value Method
#include<iostream.h>
#include<conio.h>
struct distance
	{
	int feet;
	int inches;
	};

void main()
	{
        clrscr();
        distance length1,length2;
        void prnsum(distance d1,distance d2);  //two str's of type dist. decl.
        //Reading values for lenth1
        cout<<"\nEnter length1:";
        cout<<"\nFeet :";
        cin>>length1.feet;
        cout<<"\nInches :";
        cin>>length1.inches;
        //Reading values for length2
        cout<<"\nEnter length2:";
        cout<<"\nFeet :";
        cin>>length2.feet;
        cout<<"\nInches :";
        cin>>length2.inches;
        prnsum(length1,length2);      //passing structures to function prnsum
        getch();
	}

void prnsum(distance d1,distance d2)
	{
        distance d3;
        d3.feet=d1.feet+d2.feet+(d1.inches+d2.inches)/12; //1feet=12 inches
        d3.inches=(d1.inches+d2.inches)%12;
        cout<<"\n\nTotal feet="<<d3.feet;
        cout<<"\n\nTotal inches="<<d3.inches;
        getch();
	}
