// Program Demonstrating Usage Of Structure & Nested Structure
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct addr
	{
	int houseno;
	char area[30];
	char city[30];
	char state[30];
	};
struct emp
	{
	int empno;
	char name[30];
	char desig[16];
	addr address;
	float basic;
	}worker;

void main()
	{
        // clrscr();
        cout<<"\nEnter Employee number :";
        cin>>worker.empno;
        cout<<"\nName :";
        gets(worker.name);
        cout<<"\nDesignation :";
        gets(worker.desig);
        cout<<"\nEnter Address :";
        cout<<"\nHouse Number:";
        cin>>worker.address.houseno;
        cout<<"\nArea :";
        gets(worker.address.area);
        cout<<"\nCity :";
        gets(worker.address.city);
        cout<<"\nState :";
        gets(worker.address.state);
        cout<<"\nBasic pay :";
        cin>>worker.basic;
        clrscr();
        //Displaying Data
        cout<<"\nEmployee number :"<<worker.empno;
        cout<<"\nName :"<<worker.name;
        cout<<"\nDesignation :"<<worker.desig;
        cout<<"\nAddress :";
        cout<<"\nHouse No. :"<<worker.address.houseno;
        cout<<"\nArea :"<<worker.address.area;
        cout<<"\nCity :"<<worker.address.city;
        cout<<"\nState :"<<worker.address.state;
        getch();
	}