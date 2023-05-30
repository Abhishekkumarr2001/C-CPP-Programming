// Program To Find The Sum Of Elements Of a Matrix Mat[3][4]
#include<iostream.h>
#include<conio.h>
void main()
	{
        // clrscr();
        int Mat[3][4],sum=0;
        //Loop to read the elements & finding sum of elements
        cout<<"\nEnter the elements for the array :\n";
        for(int i=0;i<3;++i)
            for(int j=0;j<4;++j)
            {
            cin>>Mat[i][j];
            sum+=Mat[i][j];
            }
        cout<<"\nSum of all elements of Mat[3][4]="<<sum;
        getch();
	}