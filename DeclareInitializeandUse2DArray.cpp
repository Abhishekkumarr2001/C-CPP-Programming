// Program To Declare, Intialize And Use a 2-D Array
#include<iostream.h>
#include<conio.h>
void main()
	{
		// clrscr();
		int array[3][2]={{1,2},{2,3},{4,3}};
		cout<<"\nDisplaying elements of 2-D array\n\n";
		for(int i=0;i<3;++i)
			{
			for(int j=0;j<2;++j)
				cout<<array[i][j]<<" ";
			cout<<endl;
			}
		getch();
	}
