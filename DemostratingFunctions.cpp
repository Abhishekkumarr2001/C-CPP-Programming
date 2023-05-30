// Program Demonstrating The Usage And Working Of Functions
#include<iostream.h>
#include<conio.h>
long int factorial(int);    //function prototype
void main()
	{
        int num;
        long int result;
        cout<<"\nEnter any number:";
        cin>>num;
        result=factorial(num);
        cout<<"\nThe factorial of "<<num<<" = "<<result;
        getch();
	}
long int factorial(int N)
	{
        long int fact=1;
        for(int i=1;i<=N;++i)
            fact*=i;
        return fact;
	}