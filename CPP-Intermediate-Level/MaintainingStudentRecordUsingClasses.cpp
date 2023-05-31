// Program To Maintain Student Record Using Class
#include <fstream.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
    class Student
{
    int rollno;
    char name[40];
    char grade;
    float marks;

public:
    void getdata();
    void display();
    int getroll()
    {
        return rollno;
    }
};
void Student::getdata()
{
    char ch;
    cin.get(ch);
    cout << "\nEnter name";
    cin.getline(name, 40);
    cout << "\nEnter grade:";
    cin >> grade;
    cout << "\nEnter marks:";
    cin >> marks;
    cout << "\n";
    cout << "\nEnter roll number:";
    cin >> rollno;
}
void Student::display()
{
    cout << "\nRoll No:" << rollno << "\tName :" << name << "\t"
         << "Grade :" << grade << "\tMarks :" << marks << endl;
}
void main()
{
    clrscr();
    int roll;
    Student st[3];
    fstream filin;
    filin.open("Stu.dat", ios::in | ios::out);
    cout << "\nEnter details for 3 students\n";
    for (int i = 0; i < 3; i++)
    {
        st[i].getdata();
        filin.write((char *)&st[i], sizeof(st[i]));
    }
    filin.seekg(0);
    cout << "\nEnter the name of the student whose record u want to find:";
    cin >> roll;
    cout << "\nThe contents of stu.dat are shown below :\n";

    for (i = 0; i < 3; i++)
    {
        filin.read((char *)&st[i], sizeof(st[i]));
        if (st[i].getroll() == roll)
            st[i].display();
        else
            cout << "\nRecord not found";
    }
    filin.close();
    getch();
}
