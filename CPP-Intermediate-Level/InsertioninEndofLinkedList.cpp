// Program For Insertion In The End Of A Linked List
#include <iostream.h>
#include <conio.h>
#include <process.h>
struct Node
{
    int info;
    Node *next;
} *front, *newptr, *save, *rear;
void Insert_End(Node *);
void Display(Node *);
void main()
{
    front = rear = NULL;
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
        cout << "\nNow inserting this node in end of list...\n";
        cout << "\nPress enter to continue.....";
        getch();
        Insert_End(newptr);
        cout << "\n\nNow the Queue (Front..to..Rear) is :\n";
        Display(front);
        cout << "\n\nWant to enter more nodes(y/n):";
        cin >> ch;
    }
    getch();
}

void Insert_End(Node *ptr)
{
    if (front == NULL)
        front = rear = ptr;
    else
    {
        rear->next = ptr;
        rear = ptr;
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

// // Program For Insertion In The End Of A Linked List
// #include <iostream.h>
// #include <conio.h>
// #include <process.h>
// struct Node
// {
//     int info;
//     Node *next;
// } *front, *newptr, *save, *rear, *ptr;
// void Insert_End(Node *);
// void Display(Node *);
// void DelNode_Q();
// void main()
// {
//     front = rear = NULL;
//     int inf;
//     char ch = 'y';
//     while (ch == 'y' || ch == 'Y')
//     {
//         // clrscr();
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
//         cout << "\n\nNow the Queue (Front..to..Rear) is :\n";
//         Display(front);
//         cout << "\n\nWant to enter more nodes(y/n):";
//         cin >> ch;
//     }
//     // clrscr();
//     do
//     {
//         cout << "\nThe linked Queue now is (Front..to..Rear): \n";
//         Display(front);
//         cout << "\nWant to delete first node? (y/n)..";
//         cin >> ch;
//         if (ch == 'y' || ch == 'Y')
//             DelNode_Q();
//     } while (ch == 'y' || ch == 'Y');
//     getch();
// }

// void Insert_End(Node *ptr)
// {
//     if (front == NULL)
//         front = rear = ptr;
//     else
//     {
//         rear->next = ptr;
//         rear = ptr;
//     }
// }

// void DelNode_Q()
// {
//     if (front == NULL)
//     {
//         cout << "\nUNDERFLOW.......\n";
//         getch();
//         exit(0);
//     }
//     else
//     {
//         ptr = front;
//         front = front->next;
//         delete ptr;
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

// // Program For Insertion In The End Of A Linked List
// #include <iostream.h>
// #include <conio.h>
// #include <process.h>
//     struct Node
// {
//     int info;
//     Node *next;
// } *start, *newptr, *save, *rear;
// void Insert_End(Node *);
// void Display(Node *);
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
//         cout << "\n\nNow the list is :\n";
//         Display(start);
//         cout << "\n\nWant to enter more nodes(y/n):";
//         cin >> ch;
//     }
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
