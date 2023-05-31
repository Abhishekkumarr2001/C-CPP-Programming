// Program To Append In A File Having Records Maintained Through Classes.
#include <fstream.h>
#include <conio.h>
#include <stdio.h>
class student
{
    int admno;
    char name[25];
    float marks;

public:
    void getdata()
    {
        cout << "\nAdmission NO:";
        cin >> admno;
        cout << "\nEnter name:";
        gets(name);
        cout << "\nEnter marks:";
        cin >> marks;
    }
    void putdata()
    {
        cout << "\nName :" << name << "\tAdmission NO :" << admno << "\tMarks :" << marks;
        cout << endl;
    }
    int getadmno() // accessor function
    {
        return admno;
    }
} s1;
void main()
{
    ofstream output("stu.dat", ios::app);
    char ans = 'y';
    while (ans == 'y')
    {
        s1.getdata();
        output.write((char *)&s1, sizeof(s1));
        cout << "\nRecord added to file";
        cout << "\nWant to add more records?(y/n)..";
        cin >> ans;
    }
    output.close();
    getch();
}
