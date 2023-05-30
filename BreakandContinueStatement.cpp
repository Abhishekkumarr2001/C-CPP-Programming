// Program Demonstrating Working Of Break And Continue Statements
#include<iostream.h>
#include<conio.h>
void main()
	{
        // clrscr();
        cout<<"The loop with \'break\' produces output as :\n";
        for(int i=1;i<=10;++i)
            {
            if (i%3==0)
                break;
            else
                cout<<i<<endl;
            }
        cout<<"\nThe loop with \'continue\' produces output as :"<<endl;
        for(i=1;i<=10;++i)
            {
            if (i%3==0)
                continue;
            else
                cout<<i<<endl;
            }
        getch();
	}
