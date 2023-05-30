// Program To Print Square & Cube Of Even & Odd No's
#include<iostream.h>
#include<conio.h>
void main()
	{
        // clrscr();
        int num,res;
        cout<<"\nEnter any number:";
        cin>>num;
        res=num%2?num*num*num:num*num;
        cout<<res;
        getch();
	}