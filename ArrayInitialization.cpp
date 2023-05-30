// Program To Demonstrate Array Initialization
#include<iostream.h>
#include<conio.h>
void main()
	{
        // clrscr();
        int a[5]={1,2,3,4,5};
        int b[]={1,2,3,4};
        int c[2][3]={1,2,3,4,5,6};
        cout<<"\nElement of array a:\n";
        for(int i=0;i<5;i++)
            cout<<a[i]<<"\t";
        cout<<"\nElements of array b:\n";
        for(int i=0;i<4;i++)
            cout<<b[i]<<"\t";
        cout<<"\nElements of matrix c(in matrix form:\n";
        for(int i=0;i<2;++i)
            {
            for(int j=0;j<3;++j)
                cout<<c[i][j]<<" ";
            cout<<endl;
            }
        getch();
	}