// Program To Read And Display The Marks Of 10 Students
#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
	{
        const int size=10;
        float marks[size];
        for(int i=0;i<10;++i)
            {
            cout<<"\nEnter the marks of student "<<i+1<<endl;
            cin>>marks[i];
            }
        cout<<endl;
        for(int i=0;i<10;++i)
            cout<<"\nMarks["<<i<<"]="<<marks[i]<<endl;
        getch();
	}