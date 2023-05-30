// Program To Generate The Mirror Image Of The Number Input By User
#include<iostream.h>
#include<conio.h>
void main()
	{
        clrscr();
        int Num,r,n,mirror=0;
        cout<<"\nEnter any Number:";
        cin>>Num;
        n=Num;
        while(Num!=0)
            {
            r=Num%10;
            Num/=10;
            mirror=mirror*10+r;
            }
        cout<<"\nMirror Image of "<<n<<" = "<<mirror;
        getch();
	}