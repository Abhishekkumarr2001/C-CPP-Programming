// Program Demonstrating Working Of Array Of Structures
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
	} worker;
emp sales_emp[5];		//creates an array of structures

void display(int a);
void enter(void);		//prototypes declared

void main()
	{
        // clrscr();
        int eno,i;
        char ch;
        enter();
        do {
            cout<<"\nEnter employee no. whose information"
            <<"is to be displayed :"<<"\n";
            cin>>eno;
            int flag=0;
            for(i=0;i<5;++i)
                if(sales_emp[i].empno==eno)  //if found then
                    {
                    display(i);
                    flag=1;
                    break;
                    }
            if(!flag)
                cout<<"\nSorry! No such employee exists.";
            cout<<"\nDo you want to display more records(y/n):";
            cin>>ch;
            }while(ch=='y');
        getch();
	}

void enter(void)
	{
	for(int i=0;i<5;++i)
		{
		cout<<"\nEnter Employee number :";
		cin>>sales_emp[i].empno;
		cout<<"\nName :";
		gets(sales_emp[i].name);
		cout<<"\nDesignation :";
		gets(sales_emp[i].desig);
		cout<<"\nEnter Address :";
		cout<<"\nHouse Number:";
		cin>>sales_emp[i].address.houseno;
		cout<<"\nArea :";
		gets(sales_emp[i].address.area);
		cout<<"\nCity :";
		gets(sales_emp[i].address.city);
		cout<<"\nState :";
		gets(sales_emp[i].address.state);
		cout<<"\nBasic pay :";
		cin>>sales_emp[i].basic;
		}
	}

//Displaying Data
void display(int a)
	{
        cout<<"\nEmployee number :"<<sales_emp[a].empno;
        cout<<"\nName :"<<sales_emp[a].name;
        cout<<"\nDesignation :"<<sales_emp[a].desig;
        cout<<"\nAddress :";
        cout<<"\nHouse No. :"<<sales_emp[a].address.houseno;
        cout<<"\nArea :"<<sales_emp[a].address.area;
        cout<<"\nCity :"<<sales_emp[a].address.city;
        cout<<"\nState :"<<sales_emp[a].address.state;
        getch();
	}
