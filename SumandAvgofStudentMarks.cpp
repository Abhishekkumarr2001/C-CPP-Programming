// Program To Find Sum And Average Marks Of 5 Students In 3 Subjects
#include<iostream.h>
#include<conio.h>
void main()
	{
        // clrscr();
        float student[5][3],tot[5]={0,0,0,0,0},avg[5]={0,0,0,0,0};     
        for(int i=0;i<5;++i) //Loop to read marks of 5 students
            {
            for(int j=0;j<3;++j)
                {
                cout<<"\nEnter Marks of Student "<<i+1<<" in Sub. "<<j+1<<endl;
                cin>>student[i][j];
                tot[i]+=student[i][j];
                }
            avg[i]=tot[i]/3;
            }
        // clrscr();
        //Loop to display total and average marks obtained by 5 students
        cout<<"\nDetail of marks obtained by 5 students in 3 subjects :\n";
        for(int i=0;i<5;++i)
            {
            cout<<"\n\n\nMarks obtained by Student #"<<i+1<<endl;
            cout<<"\n\nTotal Marks = "<<tot[i];
            cout<<"\n\nAverage Marks = "<<avg[i];
            }
        getch();
	}
