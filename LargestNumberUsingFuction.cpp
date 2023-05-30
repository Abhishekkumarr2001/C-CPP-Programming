// Program To Print Largest Element Of An Array (Using A Function)
#include<iostream.h>
#include<conio.h>
void main()
	{	
        // clrscr();
        float large(float amount[],int); //function prototype
        
        int size;
        char ch;
        int i;
        float amount[100],big;
        cout<<"\nEnter size of array (<100):";
        cin>>size;
        for(i=0;i<size;++i)
            {	
            cout<<"\nEnter element no "<<i+1<<endl;
            cin>>amount[i];
            }
        big=large(amount,size);
        cout<<"\nThe largest element of array is :"<<big<<endl;
        getch();
    }
        
float large(float amount[],int size) //function declaration
    {	
        float max=amount[0];
        for(int i=1;i<size;++i)
            {
            if(max<amount[i])
                max=amount[i];
            }
        return(max);
	}