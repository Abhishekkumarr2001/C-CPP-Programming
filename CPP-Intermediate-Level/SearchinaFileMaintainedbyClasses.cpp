// Program To Search In A File Having Records Maintained Through Classes.
#include <fstream.h>
#include <conio.h>
#include <stdio.h>
class student
{
    int rollno;
    char name[25];
    float marks;

public:
    void getdata()
    {
        cout << "\nRollno:";
        cin >> rollno;
        cout << "\nEnter name:";
        gets(name);
        cout << "\nEnter marks:";
        cin >> marks;
    }
    void putdata()
    {
        cout << "\nName :" << name << "\tRollno :" << rollno << "\tMarks :" << marks;
        cout << endl;
    }
    int getrno() // accessor function
    {
        return rollno;
    }
} s1;
void main()
{
    clrscr();
    s1.getdata();
    int rn;
    char found = 'n';
    ifstream input("stu.dat", ios::in);
    cout << "\nEnter rollno to be searched for:";
    cin >> rn;
    while (!input.eof())
    {
        input.read((char *)&s1, sizeof(s1));
        if (s1.getrno() == rn)
        {
            s1.putdata();
            found = 'y';
            break;
        }
    }
    if (found == 'n')
        cout << "\nRollno not found in file!!" << endl;
    input.close();
    getch();
}
