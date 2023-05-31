// Program To Create A Single File And Then Display Its Contents
#include <fstream.h>
#include <conio.h>
#include <stdio.h>
void main()
{
    clrscr();
    ofstream output("student"); // using constructor function of class
    char name[30], ch;
    float marks = 0.0;
    // Loop to read 5 records
    for (int i = 0; i < 5; i++)
    {
        cout << "Student " << (i + 1) << " :\tName :";
        gets(name);
        cout << "\t\tMarks :";
        cin >> marks;
        output << name << '\n'
               << marks << '\n';
    }
    output.close();
    ifstream input("student");
    input.seekg(0); // to bring file pointer to file begining
    // Loop to display records fetched from file
    for (i = 0; i < 5; i++)
    {
        input >> name;
        input >> marks;
        cout << "Student Name: " << name;
        cout << "\t Marks : " << marks << endl;
    }
    input.close();
    getch();
}