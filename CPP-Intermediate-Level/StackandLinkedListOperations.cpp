// Delete On Queue
void DelNode(NODE *front)
{
    NODE *ptr = front;
    if (front == NULL)
    {
        cout << "\nUNDERFLOW.......\n";
        exit(0);
    }
    else if (front == rear)
    {
        delete ptr;
        front = rear = NULL;
    }
    else
    {
        front = front->next;
        delete ptr;
    }
}

// Insertion in Queue 
struct THENODE
{
    char Name[20];
    THENODE *Link;
};

Solution void Insert_End(THENODE *rear)
{
    THENODE *newptr;
    newptr = new THENODE;
    newptr->Link = NULL;
    if (newptr == NULL)
    {
        cout << "\nNot enough memory...Aborting!";
        exit(1);
    }
    cout << "\nEnter name for new code:";
    gets(newptr->Name);

    if (rear == NULL)
        front = rear = newptr;
    else
    {
        rear->Link = newptr;
        rear = newptr;
    }
}

// Stack(Push)
void stack::push()
{
    if (top == 9)
    {
        cout << "\nOverflow...";
        exit(1);
    }
    int x;
    cout << "\nEnter the data:";
    cin >> x;
    top++;
    data[top] = x;
}

void stack::pop()
{
    if (top == -1)
    {
        cout << "\nUnderflow...";
        exit(1);
    }
    int x;
    x = data[top];
    top--;
    cout << x << "Removed";
}

void stack::Delete(int ITEM)
{
    stack t;
    if (top == -1)
    {
        cout << "\nUnderflow.....";
        exit(1);
    }
    while (top >= 0)
    {
        if (data[top] != ITEM)
        {
            t.top++;
            t.data[t.top] = data[top];
        }
        top--;
    }
    while (t.top >= 0) // copy temp data to current data
    {
        top++;
        data[top] = t.data[top];
        t.top--;
    }
}

void Push(NODE *start) // FUNCTION TO PUSH NEW NODE IN THE STACK
{
    NODE *newptr, *save;
    newptr = new NODE;
    newptr->next = NULL;
    cout << "\nEnter data for new node:";
    cin >> newptr->info;
    if (start == NULL)
        start = newptr;
    else
    {
        save = start;
        start = newptr;
        newptr->next = save;
    }
}

// Stack Pop 
void Pop(NODE *start)
{
    NODE *ptr if (start == NULL)
    {
        cout << "\nUNDERFLOW!!!!!!!!!!!\n";
        exit(0);
    }
    else
    {
        ptr = start;
        start = start->next;
        delete ptr;
    }
}
