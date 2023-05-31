// Program For Deletion From The Beginning  Of A Linked List
#include <iostream.h>
#include <conio.h>
#include <process.h>
struct Node
{
    int info;
    Node *next;
} *start, *newptr, *save, *rear, *ptr;

void Push(Node *);
void Display(Node *);
void Pop();

void main()
{
    start = rear = NULL;
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
        cout << "\n\nWant to enter more nodes(y/n):";
        cin >> ch;
    }
    // clrscr();
    do
    {
        cout << "\nThe list now is :\n";
        Display(start);
        getch();
        cout << "\nWant to delete node? (y/n)..";
        cin >> ch;
        if (ch == 'y' || ch == 'Y')
            Pop();
    } while (ch == 'y' || ch == 'Y');

    getch();
}
void Push(Node *ptr)
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
void Display(Node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->info << " -> ";
        ptr = ptr->next;
    }
}
void Pop()
{
    if (start == NULL)
    {
        cout << "\nUNDERFLOW!!!!!!!!!!!\n";
        cout << "\n\nAborting..............";
        getch();
        exit(0);
    }
    else
    {
        ptr = start;
        start = start->next;
        delete ptr;
    }
}

// // Program For Deletion From The Beginning Of A Linked List
// #include <iostream.h>
// #include <conio.h>
// #include <process.h>
// struct Node
// {
//     int info;
//     Node *next;
// } *start, *newptr, *save, *rear, *ptr;
// void Insert_End(Node *);
// void Display(Node *);
// void DelNode();
// void main()
// {
//     start = rear = NULL;
//     int inf;
//     char ch = 'y';
//     while (ch == 'y' || ch == 'Y')
//     {
//         clrscr();
//         cout << "\nEnter Information for the new node..";
//         cin >> inf;
//         cout << "\nCreating New Node....Press enter to continue.....\n";
//         getch();
//         newptr = new Node;
//         newptr->info = inf;
//         newptr->next = NULL;
//         if (newptr == NULL)
//         {
//             cout << "\nNot enough memory.......";
//             exit(0);
//         }
//         cout << "\nNow inserting this node in end of list...\n";
//         cout << "\nPress enter to continue.....";
//         getch();
//         Insert_End(newptr);
//         cout << "\n\nWant to enter more nodes(y/n):";
//         cin >> ch;
//     }
//     clrscr();
//     do
//     {
//         cout << "\nThe list now is :\n";
//         Display(start);
//         getch();
//         cout << "\nWant to delete first node? (y/n)..";
//         cin >> ch;
//         if (ch == 'y' || ch == 'Y')
//             DelNode();
//     } while (ch == 'y' || ch == 'Y');

//     getch();
// }

// void Insert_End(Node *ptr)
// {
//     if (start == NULL)
//         start = rear = ptr;
//     else
//     {
//         rear->next = ptr;
//         rear = ptr;
//     }
// }

// void Display(Node *ptr)
// {
//     while (ptr != NULL)
//     {
//         cout << ptr->info << " -> ";
//         ptr = ptr->next;
//     }
// }

// void DelNode()
// {
//     if (start == NULL)
//         cout << "\nUNDERFLOW!!!!!!!!!!!\n";
//     else
//     {
//         ptr = start;
//         start = start->next;
//         delete ptr;
//     }
// }
