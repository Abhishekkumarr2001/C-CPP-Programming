// Program To Demonstrate The Usage Of Conditional Operator (? :)
#include<iostream.h>
#include<conio.h>
void main()
	{
        // clrscr();
        float marks;
        char res;
        cout<<"\nEnter your marks:";
        cin>>marks;
        res=marks>=33?'P':'F';
        cout<<"\nYour result is :"<<res;
        cout<<"\n\nNote : 'P'- Pass, 'F'- Fail";
        getch();
	}
