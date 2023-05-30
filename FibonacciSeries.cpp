// Program To Generate Fibonacci Series Up to First N Terms
#include<iostream.h>
#include<conio.h>
void main()
	{
		// clrscr();
		unsigned long first,second,third,n;
		first=0;
		second=1;
		cout<<"\nHow many elements?";
		cin>>n;
		cout<<"\nFibonacci Series :\n";
		cout<<first<<" "<<second;
		for(int i=2;i<n;++i)
			{
			third=first+second;
			cout<<" "<<third;
			first=second;
			second=third;
			}
		getch();
	}
