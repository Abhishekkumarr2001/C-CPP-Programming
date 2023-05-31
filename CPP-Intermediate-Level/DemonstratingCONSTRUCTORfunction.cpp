// Program Demonstrating Usage Of Constructor Function
#include <iostream.h>
#include <conio.h>
    class student
{
    int rollno;
    float marks;

public:
    student()
    {
        rollno = 0;
        marks = 0.0;
        clas = 12;
    }
    void read_data();
    void print_data();
    ~student() { cout << "\nDestructor Executed"; }

protected:
    int clas;
};
void student::read_data()
{
    cout << "\nEnter roll number:";
    cin >> rollno;
    cout << "\nEnter marks:";
    cin >> marks;
    cout << "\nEnter class:";
    cin >> clas;
}
void student::print_data()
{
    cout << "\nRoll Number :" << rollno;
    cout << "\nMarks :" << marks;
    cout << "\nClass :" << clas;
}
void main()
{
    student s1;
    s1.print_data();
    s1.read_data();
    s1.print_data();
    getch();
}
