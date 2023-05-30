// Program To Find Sum Of Natural No's Upto N Using A Separate Function
#include<iostream.h>
#include<conio.h>
long int sum_natural(long int);		//function prototype
void main()
	{
        long int N,sum=0;
        cout<<"\nEnter any +ve number:";
        cin>>N;
        sum=sum_natural(N);
        cout<<"\nSum of all natural no's upto "<<N<<" = "<<sum;
        getch();
	}
long int sum_natural(long int Num)
	{
        long int sum=0;
        for(int i=1;i<=Num;++i)
            sum+=i;
        return sum;
	}
