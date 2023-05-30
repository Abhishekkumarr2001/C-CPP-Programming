// Program Demonstrating Usage Of void With No Arguments
#include<iostream.h>
#include<conio.h>
void LineofStars(int);                                                                      //void LineofStars(void);
void main()
	{
        // clrscr();
        int n;
        cout<<"\nSpecify the number of lines:";
        cin>>n;
        LineofStars(n);                                                                                      //	LineofStars();
        getch();
	}
void LineofStars(int N)
	{
        for(int i=1;i<=N;++i)
        {
            for(int j=1;j<=i;++j)
                cout<<"*";
            cout<<endl;
        }
	}