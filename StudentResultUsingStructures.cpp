// Program To Accept And Print A Student's Result Using A Structure having array inside it
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
struct student
	{
	int rollno;
	char name[25];
	float marks[3];		//array within structure
	char grade;
	};
student learner;		//structure variable declared

void main()
	{
        // clrscr();
        float total=0,avg=0;
        //Read in student data
        cout<<"\nEnter roll no. :";
        cin>>learner.rollno;
        cout<<"\nEnter name:";
        gets(learner.name);
        cout<<"\nEnter marks in 3 subjects :";
        for(int i=0;i<3;++i)
            {
            cout<<"\nSubject "<<i+1<<":";
            cin>>learner.marks[i];
            total+=learner.marks[i];
            }
        avg=total/3;
        if(avg<50)
            learner.grade='F';
        else if(avg<60)
            learner.grade='C';
        else if(avg<70)
            learner.grade='B';
        else
            learner.grade='A';
        //Printing result
        clrscr();
        cout<<"\nStudent Result :"<<endl;
        cout<<"\n\nRoll Number :"<<learner.rollno;
        cout<<"\n\nName :"<<learner.name;
        cout<<"\n\nTotal marks :"<<total;
        cout<<"\n\nAverage marks :"<<avg;
        cout<<"\n\nGrade :"<<learner.grade;
        getch();
	}
