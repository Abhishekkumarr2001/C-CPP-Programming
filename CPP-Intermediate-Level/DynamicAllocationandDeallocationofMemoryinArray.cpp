// Program To Allocate &De allocate Memory Dynamically For An Array
#include <iostream.h>
#include <conio.h>
#include <process.h>
int *rollno;
float *marks;
void main()
{
    // clrscr();
    int size;
    cout << "\nEnter size of array :";
    cin >> size;
    rollno = new int[size];
    marks = new float[size];
    // check whether memory is available or not
    if ((!rollno) || (!marks)) // if rollno or marks points to null
    {
        cout << "\nNot enough memory ! Aborting";
        exit(0);
    }
    // Read in values in the array elements
    for (int i = 0; i < size; i++)
    {
        cout << "\nEnter rollno and marks for student " << (i + 1) << endl;
        cin >> rollno[i] >> marks[i];
    }
    // Display the array contents
    cout << "\n\tRollno \tMarks\n";
    for (i = 0; i < size; i++)
        cout << "\t" << rollno[i] << "\t\t" << marks[i] << endl;
    delete[] rollno;
    delete[] marks; // deallocating memory
    getch();
}
