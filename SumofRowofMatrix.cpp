// Program To Find Sum Of Row Elements Of Matrix A[3][4]
#include<iostream.h>
#include<conio.h>
void main()
	{
        // clrscr();
        int a[3][4],i,j,sum;	//declaring array
        cout<<"\nInput elements of Matrix a:\n";
        for(i=0;i<3;++i)
            for(j=0;j<4;++j)
                cin>>a[i][j];
        cout<<"\nRow-wise sum of elements of matrix a:\n";
        for(i=0;i<3;++i)
            {
            sum=0;
            cout<<"\n\nSum of elements of Row#"<<i+1<<"=";
            for(j=0;j<4;++j)
                sum+=a[i][j];
            cout<<sum;
            }
        getch();
	}
