// Program Demonstrating Usage Of  1-Dimensional Array
#include<iostream.h>
#include<conio.h>
void main()
	{
        // clrscr();
        float marks[5][3],sum,avg;
        for(int j=0;j<5;j++)
            {cout<<"\nEnter marks of student#"<<j+1;
            sum=avg=0.0;
            for(int i=0;i<3;i++)
                {
                cout<<"\nEnter marks in subject#"<<i+1;
                cin>>marks[j][i];
                sum+=marks[j][i];
                }
            avg=sum/3;
            cout<<"\nResutl of Student#"<<j+1;
            cout<<"\nTotal marks="<<sum;
            cout<<"\nAverage marks="<<avg;
            }
            getch();
	}
