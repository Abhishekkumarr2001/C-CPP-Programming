// Program To Find Factorial Of Number Input By User
#include<iostream.h>
#include<conio.h>
void main()
	{
        // clrscr();
        long int fact=1;
        unsigned long int n;
        cout<<"\nEnter any number:";
        cin>>n;
        //loop to find factorial
        for(int i=1;i<=n;++i)
            fact*=i;
        cout<<"\nFactorial of "<<n<<" = "<<fact;
        getch();
	}
