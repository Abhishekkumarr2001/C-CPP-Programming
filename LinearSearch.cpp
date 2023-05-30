// Program To Implement Linear Search Using 1-D Array
#include<iostream.h>
#include<conio.h>
void main()
	{
        int a[20],size,flag=0,num,pos;
        cout<<"\nEnter the number of elements in the array(max 20):";
        cin>>size;
        cout<<"\nEnter elements of array :";
        for(int i=0;i<size;++i)
            cin>>a[i];
        cout<<"\nEnter the element to be serched for:";
        cin>>num;
        for(i=0;i<size;++i)
            if(a[i]==num)
                {
                flag=1;
                pos=i+1;
                break;
                }
        if(!flag)
            cout<<"\nItem has not found";
        else
            cout<<"\nItem found at position "<<pos;
        getch();
	}