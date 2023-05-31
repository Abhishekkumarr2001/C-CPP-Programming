// Program For Insertion In The Beginning Of A Stack
#include <iostream.h>
#include <conio.h>
#include <process.h>
struct Node
{
    int info;
    Node *next;
} *start, *newptr, *save, *ptr;

void Push(Node *);
void Display(Node *);

void main()
{
    start = NULL;
    int inf;
    char ch = 'y';
    while (ch == 'y' || ch == 'Y')
    {
        // clrscr();
        cout << "\nEnter Information for the new node..";
        cin >> inf;
        cout << "\nCreating New Node....Press enter to continue.....\n";
        getch();
        newptr = new Node;
        newptr->info = inf;
        newptr->next = NULL;
        if (newptr == NULL)
        {
            cout << "\nNot enough memory.......";
            exit(0);
        }
        cout << "\nNow inserting this node in the stack...\n";
        cout << "\nPress enter to continue.....";
        getch();
        Push(newptr);
        cout << "\n\nNow the contents of stack is :\n";
        Display(start);
        cout << "\n\nWant to enter more nodes(y/n):";
        cin >> ch;
    }
    getch();
}

void Push(Node *ptr) // FUNCTION TO PUSH NEW NODE IN THE STACK
{
    if (start == NULL)
        start = ptr;
    else
    {
        save = start;
        start = ptr;
        ptr->next = save;
    }
}

void Display(Node *ptr) // FUNCTION TO DISPLAY LINKED STACK
{
    while (ptr != NULL)
    {
        cout << ptr->info << " -> ";
        ptr = ptr->next;
    }
}
