// Program To Find Sum Of Row and Column Elements Of  2-D Array
#include<iostream.h>
#include<conio.h>
void main()
	{
		// clrscr();
		int A[10][10],i,j,r[10],c[10],row,col;
		cout<<"\nEnter the number of rows & columns of matrix :";
		cin>>row>>col;
		cout<<"\nEnter the elements of a matrix : \n";
		for(i=0;i<row;++i)
			for(j=0;j<col;++j)
				cin>>A[i][j];
		cout<<"\nGiven Matrix is :";
		for(i=0;i<row;++i)
			{
			cout<<endl;
			for(j=0;j<col;++j)
				cout<<A[i][j]<<" ";
			}
		//Loop to find row sum
		for(i=0;i<row;++i)
			{
			r[i]=0;
			for(j=0;j<col;++j)
				r[i]+=A[i][j];       //finding row sum
			}
		for(j=0;j<col;++j)
			{
			c[j]=0;
			for(i=0;i<row;++i)
				c[j]+=A[i][j];       //finding column sum
			}
		for(i=0;i<row;++i)
			cout<<"\nSum of row# "<<i+1<<" is :"<<r[i];
		for(i=0;i<col;++i)
			cout<<"\nSum of column# "<<i+1<<" is :"<<c[i];
		getch();
	}
