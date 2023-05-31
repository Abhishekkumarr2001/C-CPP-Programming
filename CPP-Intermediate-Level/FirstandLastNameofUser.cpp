// Program To Print First Name And Last Name Of User
#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>
    void
    main()
{
    clrscr();
    char name[30];
    cout << "\nEnter your name :";
    gets(name);
    int i = 0;
    cout << "\n\nFirst name : ";
    while (name[i] != ' ')
    {
        cout << name[i];
        i++;
    }
    cout << "\n\nLast name :";
    while (name[i] != '\0')
    {
        cout << name[i];
        i++;
    }
    getch();
}