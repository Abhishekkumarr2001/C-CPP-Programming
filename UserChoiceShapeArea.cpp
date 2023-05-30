// Program To Calculate Area Of Circle,A Rectangle Or A Triangle Depending Upon User's Choice
#include<iostream.h>
#include<math.h>
#include<conio.h>
void main()
	{
        // clrscr();
        float area,r,len,bre,a,b,c,s;
        int ch;
        cout<<"\n\t****Area Menu*****";
        cout<<"\n\n\t1. Circle";
        cout<<"\n\n\t2. Rectangle";
        cout<<"\n\n\t3. Triangle";
        cout<<"\n\nEnter your choice :";
        cin>>ch;
        switch(ch)
            {
            case 1: cout<<"\n\nEnter the radiusof the circle:";
                cin>>r;
                area=3.14*r*r;
                cout<<"\nArea of circle="<<area<<endl;
                break;
            case 2: cout<<"\nEnter length and breadth of rectangle:";
                cin>>len>>bre;
                area=len*bre;
                cout<<"\nThe area of rectangle="<<area<<endl;
                break;
            case 3: cout<<"\nEnter three sides of a triangle:";
                cin>>a>>b>>c;
                s=(a+b+c)/2;
                area=sqrt(s*(s-a)*(s-b)*(s-c));
                cout<<"\nArea of triangle="<<area<<endl;
                break;
            default: cout<<"\nWrong choice!";
                break;
            }
        getch();
	}
