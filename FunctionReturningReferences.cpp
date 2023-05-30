// Function Returning References
#include<iostream.h>
#include<conio.h>

int &max(int &x,int &y)
	{
        if (x>y)
            return x;
        else
            return y;
	}

void main()
	{
        clrscr();
        int a,b;
        cout<<"\nEnter the values for a and b:";
        cin>>a>>b;
        max(a,b)=-1;
        cout<<"\n\na="<<a<<"\tb="<<b<<endl;
        getch();
	}