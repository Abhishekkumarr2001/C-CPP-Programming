#include <stdio.h>
#include <malloc.h>
struct Node
{
    int n;
    int degree;
    struct Node *parent;
    struct Node *child;
    struct Node *sibling;
};
struct Node *TempHeap();
int TempHeapLink(struct Node *, struct Node *);
struct Node *NodeCreation(int);
struct Node *Union(struct Node *, struct Node *);
struct Node *Insertion(struct Node *, struct Node *);
struct Node *Merge(struct Node *, struct Node *);
struct Node *ExtractMin(struct Node *);
int RevertList(struct Node *);
int Display(struct Node *);
struct Node *SearchNode(struct Node *, int);
int DecreaseKey(struct Node *, int, int);
int Delete(struct Node *, int);
int count = 1;

struct Node *TempHeap()
{
    struct Node *np;
    np = NULL;
    return np;
}
struct Node *H = NULL;
struct Node *Hr = NULL;

int TempHeapLink(struct Node *y, struct Node *z)
{
    y->parent = z;
    y->sibling = z->child;
    z->child = y;
    z->degree = z->degree + 1;
    return 0;
}

struct Node *NodeCreation(int k)
{
    struct Node *p;
    p = (struct Node *)malloc(sizeof(struct Node));
    p->n = k;
    return p;
}

struct Node *Union(struct Node *H1, struct Node *H2)
{
    struct Node *prev_x;
    struct Node *next_x;
    struct Node *x;
    struct Node *H = TempHeap();
    H = Merge(H1, H2);
    if (H == NULL)
        return H;
    prev_x = NULL;
    x = H;
    next_x = x->sibling;
    while (next_x != NULL)
    {
        if ((x->degree != next_x->degree) || ((next_x->sibling != NULL) && (next_x->sibling)->degree == x->degree))
        {
            prev_x = x;
            x = next_x;
        }
        else
        {
            if (x->n <= next_x->n)
            {
                x->sibling = next_x->sibling;
                TempHeapLink(next_x, x);
            }
            else
            {
                if (prev_x == NULL)
                    H = next_x;
                else
                    prev_x->sibling = next_x;
                TempHeapLink(x, next_x);
                x = next_x;
            }
        }
        next_x = x->sibling;
    }
    return H;
}

struct Node *Insertion(struct Node *H, struct Node *x)
{
    struct Node *H1 = TempHeap();
    x->parent = NULL;
    x->child = NULL;
    x->sibling = NULL;
    x->degree = 0;
    H1 = x;
    H = Union(H, H1);
    return H;
}

struct Node *Merge(struct Node *H1, struct Node *H2)
{
    struct Node *H = TempHeap();
    struct Node *y;
    struct Node *z;
    struct Node *a;
    struct Node *b;
    y = H1;
    z = H2;
    if (y != NULL)
    {
        if (z != NULL && y->degree <= z->degree)
            H = y;
        else if (z != NULL && y->degree > z->degree)
            H = z;
        else
            H = y;
    }
    else
        H = z;
    while (y != NULL && z != NULL)
    {
        if (y->degree < z->degree)
        {
            y = y->sibling;
        }
        else if (y->degree == z->degree)
        {
            a = y->sibling;
            y->sibling = z;
            y = a;
        }
        else
        {
            b = z->sibling;
            z->sibling = y;
            z = b;
        }
    }
    return H;
}

int Display(struct Node *H)
{
    struct Node *p;
    if (H == NULL)
    {
        printf("\nHeap is Empty.");
        return 0;
    }
    printf("\nRoot Nodes are: \n");
    p = H;
    while (p != NULL)
    {
        printf("%d", p->n);
        if (p->sibling != NULL)
            printf(" -> ");
        p = p->sibling;
    }
    printf("\n");
    return 0;
}

struct Node *ExtractMin(struct Node *H1)
{
    int min;
    struct Node *t = NULL;
    struct Node *x = H1;
    struct Node *Hr;
    struct Node *p;
    Hr = NULL;
    if (x == NULL)
    {
        printf("\nNo Nodes to Extract.");
        return x;
    }
    p = x;
    while (p->sibling != NULL)
    {
        if ((p->sibling)->n < min)
        {
            min = (p->sibling)->n;
            t = p;
            x = p->sibling;
        }
        p = p->sibling;
    }
    if (t == NULL && x->sibling == NULL)
        H1 = NULL;
    else if (t == NULL)
        H1 = x->sibling;
    else if (t->sibling == NULL)
        t = NULL;
    else
        t->sibling = x->sibling;
    if (x->child != NULL)
    {
        RevertList(x->child);
        (x->child)->sibling = NULL;
    }
    H = Union(H1, Hr);
    return x;
}

int RevertList(struct Node *y)
{
    if (y->sibling != NULL)
    {
        RevertList(y->sibling);
        (y->sibling)->sibling = y;
    }
    else
        Hr = y;
    return 0;
}

struct Node *SearchNode(struct Node *H, int k)
{
    struct Node *x = H;
    struct Node *p = NULL;
    if (x->n == k)
    {
        p = x;
        return p;
    }
    if (x->child != NULL && p == NULL)
    {
        p = SearchNode(x->child, k);
    }

    if (x->sibling != NULL && p == NULL)
    {
        p = SearchNode(x->sibling, k);
    }
    return p;
}

int DecreaseKey(struct Node *H, int i, int k)
{
    int temp;
    struct Node *p;
    struct Node *y;
    struct Node *z;
    p = SearchNode(H, i);
    if (p == NULL)
    {
        printf("\nInvalid Key");
        return 0;
    }
    if (k > p->n)
    {
        printf("\nThe New Key is greater than the current Key.");
        return 0;
    }
    p->n = k;
    y = p;
    z = p->parent;
    while (z != NULL && y->n < z->n)
    {
        temp = y->n;
        y->n = z->n;
        z->n = temp;
        y = z;
        z = z->parent;
    }
    printf("\nKey Reduced Succesfully.");
    return 0;
}

int Delete(struct Node *H, int k)
{
    struct Node *np;
    if (H == NULL)
    {
        printf("\nThe Heap is Empty.");
        return 0;
    }
    DecreaseKey(H, k, -1000);
    np = ExtractMin(H);
    if (np != NULL)
        printf("\nNode Deleted Succesfully.");
    return 0;
}

int main()
{
    int i, n, m, l;
    struct Node *p;
    struct Node *np;
    char ch;
    printf("\nEnter the Number of Elements:");
    scanf("%d", &n);
    printf("\nEnter the Elements:");
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &m);
        np = NodeCreation(m);
        H = Insertion(H, np);
    }
    Display(H);
    do
    {
        printf("\nMenu");
        printf("\n1.Insertion\n2.Extract the Minimum Key\n3.Decrease a Node\n4.Delete a Node\n5.Quit");
        printf("\nEnter your choice:");
        scanf("%d", &l);
        switch (l)
        {
        case 1:
            printf("\nEnter the element to be Inserted:");
            scanf("%d", &m);
            p = NodeCreation(m);
            H = Insertion(H, p);
            printf("\nNew Heap is:\n");
            Display(H);
            break;
        case 2:
            printf("\nExtracting the Minimum Key");
            p = ExtractMin(H);
            if (p != NULL)
                printf("\nExtracted Node is %d.", p->n);
            printf("\nNew Heap is:\n");
            Display(H);
            break;
        case 3:
            printf("\nEnter the Key to be Decreased:");
            scanf("%d", &m);
            printf("\nEnter the New Value: ");
            scanf("%d", &l);
            DecreaseKey(H, m, l);
            printf("\nNew Heap is:\n");
            Display(H);
            break;
        case 4:
            printf("\nEnter the Key to be Deleted: ");
            scanf("%d", &m);
            Delete(H, m);
            break;
        case 5:
            break;
        default:
            printf("\nInvalid Choice\n");
        }
    } while (l != 5);
}