// Program to Find the Number of Words “The” In the String.
#include<fstream.h>
#include<conio.h>
#include<string.h>
void main()
	{
        fstream input;
        input.open("Data.txt",ios::in);
        char word[10];
        int count=0;
        while(!input.eof())
            {
            input>>word;
            if(strcmpi("The",word)==0)
                count++;
            }
        input.close();
        cout<<"\nNumber of words="<<count;
        getch();
	}