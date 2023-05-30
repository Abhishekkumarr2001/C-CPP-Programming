// Program Demonstrating Usage Of Continue Statement
#include<iostream.h>
#include<conio.h>
void main()
	{
        // clrscr();
        int a,b,c,i;
        for(i=0;i<5;++i)
            {
            cout<<"\nEnter any two numbers :";
            cin>>a>>b;
            if(b==0)
                {
                cout<<"\nDenominator cannot be zero, Enter again!";
                continue;
                }
            else
                c=a/b;
            cout<<"\nQuotient="<<c<<endl;
            }
        getch();
	}