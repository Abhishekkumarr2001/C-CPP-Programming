// Pushing New Element In Stack-Array
#include <iostream.h>
#include <conio.h>
#include <process.h>
int Push(int[], int &, int);
void Display(int[], int);
const int size = 50;
void main()
{
    int Stack[size], Item, top = -1, res;
    char ch = 'y';
    // clrscr();
    while (ch == 'y' || ch == 'Y')
    {
        cout << "\nEnter ITEM for insertion :";
        cin >> Item;
        res = Push(Stack, top, Item);
        if (res == -1)
        {
            cout << "\nOVERFLOW!!! Aborting!!\n";
            exit(1);
        }
        cout << "\nThe Stack now is :\n";
        Display(Stack, top);
        cout << "\nWant to insert more element? (y/n)...";
        cin >> ch;
    }
    getch();
}

int Push(int Stack[], int &top, int ele)
{
    if (top == size - 1)
        return -1;
    else
    {
        top++;
        Stack[top] = ele;
    }
    return 0;
}

void Display(int Stack[], int top)
{
    cout << Stack[top] << " <--" << endl;
    for (int i = top - 1; i >= 0; i--)
        cout << Stack[i] << endl;
}