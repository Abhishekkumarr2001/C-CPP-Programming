// Program Depicting Usage Of Existing Files
#include <fstream.h>
#include <conio.h>
void main()
{
    ofstream output;
    output.open("marks.dat", ios::app);
    char ans = 'y';
    int rollno;
    float marks;
    clrscr();
    while (ans == 'y' || ans == 'Y')
    {
        cout << "\nEnter Rollno. :";
        cin >> rollno;
        cout << "\nEnter marks:";
        cin >> marks;
        output << rollno << '\n'
               << marks << '\n';
        cout << "\nWant to enter more records?(y/n)..";
        cin >> ans;
    }
    output.close();
    getch();
}