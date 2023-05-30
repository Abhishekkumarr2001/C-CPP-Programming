// Program Demonstrating Usage Of  sizeof()  And comma(,) Operators
#include<iostream.h>
#include<conio.h>
void main()
	{
        clrscr();
        int a;
        float b;
        char c;
        cout<<"\nSize of integer var. a in bytes   =\t"<<sizeof(a)<<endl;
        cout<<"\nSize of floating var. b in bytes  =\t"<<sizeof(b)<<endl;
        cout<<"\nSize of character var. c in bytes =\t"<<sizeof(c)<<endl;
        //Usage of comma operator
        b=(a=3,a+1);  //first assign 3 to a and then a+1 to b
        cout<<"\n\na="<<a;
        cout<<"\n\nb="<<b;
        getch();
	}
