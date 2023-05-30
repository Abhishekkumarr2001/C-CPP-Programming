// Program To Find Sum Of Upper & Lower Triangular Matrices
#include<iostream.h>
#include<conio.h>
void main()
	{
        // clrscr();
        int a[10][10];
        int i,j,size;
        cout<<"\nEnter the size of matrix:";
        cin>>size;
        cout<<"\nEnter elements of matrix a:\n";
        for(i=0;i<size;++i)
            for(j=0;j<size;++j)
                cin>>a[i][j];
        cout<<"\nGiven matrix is :\n";
        for(i=0;i<size;++i)
            {
            for(j=0;j<size;++j)
                cout<<a[i][j]<<" ";
            cout<<endl;
            }
        //Printing of upper & lower triangular matrices
        cout<<"\nUpper triangular matrix is :\n";
        for(i=0;i<size;++i)
            {
            for(j=0;j<size;++j)
                if(i<j)
                    cout<<a[i][j]<<" ";
                else
                    cout<<"  ";
            cout<<endl;
            }
        cout<<"\nLower Triangular Matrix is :\n";
        for(i=0;i<size;++i)
            {
            for(j=0;j<size;++j)
                if(i>j)
                    cout<<a[i][j]<<" ";
                else
                    cout<<"  ";
            cout<<endl;
            }

        getch();
       }
