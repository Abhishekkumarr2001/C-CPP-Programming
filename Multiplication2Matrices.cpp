// Program To Multiply Two Matrices
#include<iostream.h>
#include<conio.h>
#include<process.h>	//for exit() function
void main()
	{
        clrscr();
        int a[10][10],b[10][10],c[10][10];
        int i,j,m,n,p,q,k;
        //input rows and columns of matrices A[m][n] and B[p][q]
        cout<<"\nInput row & column of matrix-A\n";
        cin>>m>>n;
        cout<<"\nInput row & column of matrix-B\n";
        cin>>p>>q;
        if(n==p)		//check if matrix can be multiplied
            cout<<"\nMatrix can be multiplied";
        else
            {
            cout<<"\nMatrix cannot be multiplied";
            getch();
            exit(0);
            }
        cout<<"\nInput matrix-A\n";
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
                cin>>a[i][j];
        cout<<"\nInput matrix-B\n";
        for(i=0;i<p;++i)
            for(j=0;j<q;++j)
                cin>>b[i][j];
        //Multiplication of two matrices
            for(i=0;i<m;++i)
            {
            cout<<endl;
            for(j=0;j<q;++j)
                {
                c[i][j]=0;
                for(k=0;k<p;++k)
                    c[i][j]+=a[i][k]*b[k][j];
                cout<<c[i][j]<<" ";
                }
            }
        getch();
	}
