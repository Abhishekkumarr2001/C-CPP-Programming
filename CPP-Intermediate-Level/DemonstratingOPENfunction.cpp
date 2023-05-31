// Program Demonstrating Usage Of Open Funtion
#include <fstream.h>
#include <conio.h>

void main()
{
    ofstream output;
    output.open("marks.dat", ios::out);
    char ans = 'y';
    int rollno;
    float marks;
    while (ans == 'y' || ans == 'Y')
    {
        cout << "\nEnter Rollno:";
        cin >> rollno;
        cout << "\nEnter Marks:";
        cin >> marks;
        output << rollno << '\n'
               << marks << '\n';
        cout << "\nWant to enter more records?(y/n)..";
        cin >> ans;
    }
    output.close();
    getch();
}