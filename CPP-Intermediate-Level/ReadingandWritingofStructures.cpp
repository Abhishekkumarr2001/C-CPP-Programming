// Program Demonstrating Reading & Writing Of Structures
#include <fstream.h>
#include <conio.h>
#include <stdio.h>
struct student
{
    char name[30];
    float marks;
};
void main()
{
    clrscr();
    student s1;
    cout << "\nEnter your name:";
    gets(s1.name);
    cout << "\nEnter marks:";
    cin >> s1.marks;
    ofstream output;
    output.open("Student.dat", ios::out | ios::binary);
    output.write((char *)&s1, sizeof(student)); // writing complete structure
    output.close();
    ifstream input;
    input.open("Student.dat", ios::in | ios::binary);
    input.read((char *)&s1, sizeof(student));
    cout << endl;
    cout << "Name :" << s1.name << "\tMarks :" << s1.marks;
    getch();
}