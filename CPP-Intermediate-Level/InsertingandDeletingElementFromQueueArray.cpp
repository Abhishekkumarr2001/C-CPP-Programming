// Inserting Deleting Element From Queue Implemented Using Array
#include <iostream.h>
#include <conio.h>
#include <process.h>
int Insert_in_Q(int[], int);
int Delete(int[]);
void Display(int[], int, int);
const int size = 50;
int Queue[size], front = -1, rear = -1;
void main()
{
    int res, Item;
    char ch = 'y';
    // clrscr();
    while (ch == 'y' || ch == 'Y')
    {
        cout << "\nEnter ITEM for insertion :";
        cin >> Item;
        res = Insert_in_Q(Queue, Item);
        if (res == -1)
        {
            cout << "\nOVERFLOW!!! Aborting!!\n";
            exit(1);
        }
        cout << "\nNow the Queue (Front....to....Rear ) is:\n";
        Display(Queue, front, rear);
        cout << "\nWant to insert more element? (y/n)...";
        cin >> ch;
    }
    cout << "\nNow deletion of elements begin........\n";
    ch = 'y';
    while (ch == 'y' || ch == 'Y')
    {
        res = Delete(Queue);
        if (res == -1)
        {
            cout << "\nUNDERFLOW!!!!!!!!Aborting!!\n";
            exit(1);
        }
        else
        {
            cout << "\nElement deleted is :" << res << endl;
            cout << "\nNow the Queue (Front..to..Rear) is :\n";
            Display(Queue, front, rear);
        }
        cout << "\nWant to delete more elements?(y/n)..";
        cin >> ch;
    }
    getch();
}

int Insert_in_Q(int Queue[], int ele)
{
    if (rear == size - 1)
        return -1;
    else if (rear == -1)
    {
        front = rear = 0;
        Queue[rear] = ele;
    }
    else
    {
        rear++;
        Queue[rear] = ele;
    }
    return 0;
}

int Delete(int Queue[])
{
    int ret;
    if (front == -1)
        return -1;
    else
    {
        ret = Queue[front];
        if (front == rear)
            front = rear = -1;
        else
            front++;
    }
    return ret;
}

void Display(int Queue[], int front, int rear)
{
    if (front == -1)
        return;
    for (int i = front; i < rear; i++)
        cout << Queue[i] << "<-";
    cout << Queue[rear] << endl;
}
