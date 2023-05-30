// Program To Demonstrate Logical Operators (&&-And,||-OR, !-NOT)
#include<iostream.h>
#include<conio.h>
void main()
	{
        clrscr();
        cout<<"\nExpression\t\tResult"<<endl;
        cout<<"\n\n(6<=6) && (5<3)\t\t"<<((6<=6)&&(5<3));
        cout<<"\n\n(6<=6) || (5<3)\t\t"<<((6<=6)||(5<3));
        cout<<"\n\n!(6<=6)\t\t\t"<<(!(6<=6));
        cout<<"\n\n!(5>9)\t\t\t"<<(!(5>9));
        getch();
	}