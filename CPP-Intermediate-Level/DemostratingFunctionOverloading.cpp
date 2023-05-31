// Program To Illustrate The Working Of Overloaded Function
#include <iostream.h>
#include <conio.h>
    void
    amount(float princ, int time, float rate) // #1
{
    cout << "\nPrincipal Amount :" << princ;
    cout << "\tTime :" << time << " years";
    cout << "\tRate :" << rate;
    cout << "\nInterest Amount :" << (princ * time * rate) << endl;
}
void amount(float princ, int time) // #2
{
    cout << "\nPrincipal Amount :" << princ;
    cout << "\tTime :" << time << " years";
    cout << "\tRate : 0.08";
    cout << "\nInterest Amount :" << (princ * time * 0.08) << endl;
}
void amount(float princ, float rate) // #3
{
    cout << "\nPrincipal Amount :" << princ;
    cout << "\tTime : 2 years";
    cout << "\tRate :" << rate;
    cout << "\nInterest Amount :" << (princ * 2 * rate) << endl;
}
void amount(int time, float rate) // #4
{
    cout << "\nPrincipal Amount :2000";
    cout << "\tTime :" << time << " years";
    cout << "\tRate :" << rate;
    cout << "\nInterest Amount :" << (2000 * rate * time) << endl;
}
void amount(float princ) // #5
{
    cout << "\nPrincipal Amount:" << princ;
    cout << "\tTime :2 years";
    cout << "\tRate :0.08";
    cout << "\nInterest Amount :" << (princ * 2 * 0.08);
    cout << endl;
}
void main()
{
    // clrscr();
    cout << endl;
    cout << endl;
    cout << "Case 1";
    amount(2000.0f, 2, 0.2);
    cout << "Case 2";
    amount(2500.0F, 3);
    cout << "Case 3";
    amount(2300.0F, 0.11F);
    cout << "Case 4";
    amount(2, 0.12F);
    cout << "Case 5";
    amount(2500.0f);
    getch();
}
