// Program Demonstrating Usage Of Constant Argument
#include<iostream.h>
#include<conio.h>
int sum(int,int);
void main()
	{
        int x,y,result;
        cout<<"\nEnter any two numbers:";
        cin>>x>>y;
        result=sum(x);
        cout<<"\nSum of two no's="<<result;
        getch();
	}
int sum(int a,int b=5)
	{
        a=23;
        //b=45;
        return(a+b);
	}