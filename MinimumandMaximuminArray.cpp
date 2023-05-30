// Program To Find Maximum/Minimum Value Among Array Elements
#include<iostream.h>
#include<conio.h>
void main()
	{
        int a[10],small,large;
        cout<<"\nEnter array elements :";
        for(int i=0;i<10;++i)
            cin>>a[i];
        small=a[0],large=a[0];
        for(i=1;i<10;++i)
            {
            if(a[i]<small)
                small=a[i];
            if(a[i]>large)
                large=a[i];
            }
        cout<<"\nSmallest Number="<<small;
        cout<<"\nLargest Number="<<large;
        getch();
	}