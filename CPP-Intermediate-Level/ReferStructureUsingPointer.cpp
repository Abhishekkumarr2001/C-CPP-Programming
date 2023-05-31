// Program To Refer Structure Using Pointer
#include <iostream.h>
#include <stdio.h>
#include <conio.h>
struct Employee
{
    int empno;
    char name[25];
    float basic;
    float experience;
};
void display(Employee *emp);  // function prototype
void increase(Employee *emp); // function prototype

void main()
{
    Employee mgr, *eptr;
    cout << "\nEnter employee number:";
    cin >> mgr.empno;
    cout << "\nEnter name:";
    gets(mgr.name);
    cout << "\nEnter basic:";
    cin >> mgr.basic;
    cout << "\nEnter experience (in years):";
    cin >> mgr.experience;
    eptr = &mgr; // pointer storing address of structure variable
    cout << "\nDetails of employee before increase in salary";
    display(eptr);  // passing pointer containing structure
    increase(eptr); // passing pointer containing structure
    cout << "\nDetails of employee after increasing salary";
    display(eptr);
    getch();
}

void display(Employee *emp) // function receiving structure address
{
    cout << "\nEmployee Number :" << emp->empno;
    cout << "\nName :" << emp->name;
    cout << "\nBasic :" << emp->basic;
    cout << "\nExperience :" << emp->experience << " years" << endl;
}

void increase(Employee *emp)
{
    if (emp->experience >= 10)
        emp->basic += 200;
}
