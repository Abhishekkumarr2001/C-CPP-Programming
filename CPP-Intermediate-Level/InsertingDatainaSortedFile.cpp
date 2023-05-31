// Program To Insert Data In A Sorted File
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
        cout << "\nEnter admission no:";
        cin >> admno;
        cout << "\nEnter the name:";
        gets(name);
        cout << "\nEnter marks:";
        cin >> marks;
    }
    void putdata()
    {
        cout << "\nAdmission no:" << admno << "\tName :" << name << "\tMarks :" << marks;
    }
    int getadmno()
    {
        return admno;
    }
} s1, stud;
void main()
{
    clrscr();
    ifstream fi("stu.dat", ios::in);
    ofstream fo("temp.dat", ios::out);
    char last = 'y';
    cout << "\nCurrent contents of stu.dat file are :\n";
    while (fi.read((char *)&stud, sizeof(stud)))
    {
        stud.putdata();
    }

    fi.close();
    fi.open("stu.dat", ios::in);
    cout << "\nEnter details of stdent whose record is to be inserted\n";
    s1.getdata();
    while (!fi.eof())
    {
        fi.read((char *)&stud, sizeof(stud));
        if (s1.getadmno() <= stud.getadmno())
        {
            fo.write((char *)&s1, sizeof(s1));
            last = 'n';
            break;
        }
        else
            fo.write((char *)&stud, sizeof(stud));
    }
    if (last == 'y')
        fo.write((char *)&s1, sizeof(s1));
    else if (!fi.eof())
    {
        while (fi.read((char *)&stud, sizeof(stud)))
        {
            fi.read((char *)&stud, sizeof(stud));
            fo.write((char *)&stud, sizeof(stud));
        }
    }
    fi.close();
    fo.close();
    remove("stu.dat");
    rename("temp.dat", "stu.dat");
    fi.open("stu.dat", ios::in);
    cout << "\nNew contents of file are given below:\n";
    while (fi.read((char *)&stud, sizeof(stud)))
    {
        if (fi.eof())
            break;
        stud.putdata();
        fi.read((char *)&stud, sizeof(stud));
        if (fi.eof())
            break;
    }
    fi.close();
    getch();
}
