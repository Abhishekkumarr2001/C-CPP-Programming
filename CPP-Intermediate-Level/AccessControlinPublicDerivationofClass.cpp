01. Program To Illustrate The Access Control In Public Derivation Of A Class
#include <iostream.h>
#include <conio.h>
#include <stdio.h>
const int LEN = 25;
class Employee
{
private:
    char name[LEN];
    unsigned long enumb;

public:
    void getdata()
    {
        cout << "\nEnter Name:";
        gets(name);
        cout << "\nEnter Employee Number:";
        cin >> enumb;
    }
    void putdata()
    {
        cout << "\nName :" << name << "\t";
        cout << "Emp. Number :" << enumb << "\t";
        cout << "Basic Salary :" << basic;
    }

protected:
    float basic;
    void getbasic()
    {
        cout << "\nEnter Basic :";
        cin >> basic;
    }
};
class Manager : private Employee
{
private:
    char title[LEN];

public:
    void getdata()
    {
        Employee::getdata(); // To resolve identity as Manager also has a getdata()
        getbasic();
        cout << "\nEnter Title :";
        gets(title);
        cout << endl;
    }
    void putdata()
    {
        Employee::putdata();
        cout << "\tTitle :" << title << endl;
    }
};
void main()
{
    clrscr();
    Manager m1, m2;
    cout << "\nManager1\n";
    m1.getdata();
    cout << "\nManager2\n";
    m2.getdata();
    cout << "\t\tManager1 Details\n";
    m1.putdata();
    cout << "\t\tManager2 Details\n";
    m2.putdata();
    getch();
}
