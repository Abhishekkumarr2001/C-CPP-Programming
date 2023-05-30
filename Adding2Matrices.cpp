// Program To Add Two Matrices
#include<iostream.h>
#include<conio.h>
#include<process.h>	//for exit() function
void main()
	{
        // clrscr();
        int a[10][10],b[10][10],c[10][10];
        int i,j,m,n,p,q;
        //input rows and columns of matrices A[m][n] and B[p][q]
        cout<<"\nInput row & column of matrix-A\n";
        cin>>m>>n;
        cout<<"\nInput row & column of matrix-B\n";
        cin>>p>>q;
        if((m==p)&&(n==q))	//check if matrix can be added
            cout<<"\nMatrix can be added";
        else
            {
            cout<<"\nMatrix cannot be added";
            getch();
            exit(0);
            }
        cout<<"\nInput matrix-A\n";
        for(i=0;i<m;++i)
            for(j=0;j<n;++j)
                cin>>a[i][j];
        cout<<"\nInput matrix-B\n";
        for(i=0;i<p;++i)
            for(j=0;j<q;++j)
                cin>>b[i][j];
        //Addition of two matrices
        for(i=0;i<m;++i)
            for(j=0;j<n;++j)
                c[i][j]=a[i][j]+b[i][j];
        //Displaying resultant matrix c
        cout<<"\nThe sum of two matrix is :\n";
        for(i=0;i<m;++i)
            {
            for(j=0;j<n;++j)
                cout<<c[i][j]<<" ";
            cout<<endl;
            }
        getch();
	}
