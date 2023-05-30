// Program Demonstrating Variable Scope
#include<iostream.h>
#include<conio.h>
int x=4,y=5;   //global variable
char ch;       //file scope (global variable)
int sum(int,int);	//function prototype
void main()
	{
        clrscr();
        int a,b;   	//function scope for main()
        int result;       //local variables of main()
        cout<<"\nEnter the values of a and b:";
        cin>>a>>b;
        int x=3,y=2;
        cout<<"\nValue of local x= "<<x<<" y= "<<y<<endl;	 //accessing local variables
        cout<<"\nValue of global x & Y:"<<::x<<"\t"<<::y<<endl;	   //accessing global variables
        result=sum(a,b);
        cout<<"\nSum of two no's="<<result;
            {
                char grade='A';	//Block scope (local variables of block)
                cout<<"\n"<<grade<<endl;
            }
        //	cout<<grade<<endl;	//illegal statement
        getch();
	}
int sum(int a,int b)
	{
        int res;   //local variable of sum (function scope)
        res=a+b;
        return res;
	}
