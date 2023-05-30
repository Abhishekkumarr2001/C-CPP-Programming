// Program To Accept The Sales Of Each Day Of The Month And Print The Total
#include<iostream.h>                                            //sales and average sales of the month
#include<conio.h>
void main()
	{
        clrscr();
        const int size=3;
        float sales[size],avg=0,total=0;
        for(int i=0;i<size;++i)
            {
            cout<<"\nEnter sales made on day"<<i+1<<" : ";
            cin>>sales[i];
            total+=sales[i];
            }
        avg=total/size;
        cout<<"\nTotal sales="<<total<<"\n";
        cout<<"\nAverage sales="<<avg<<"\n";
        getch();
	}