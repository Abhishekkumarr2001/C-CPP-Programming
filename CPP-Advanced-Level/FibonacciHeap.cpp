#include <bits/stdc++.h>
#include <cmath>
#include <cstdlib>
#include <iostream>
using namespace std;
struct Node
{
  int n;
  int degree;
  Node *parent;
  Node *child;
  Node *left;
  Node *right;
  char mark;
  char C;
};

class FibonacciHeap
{
private:
  int nH;
  Node *H;

public:
  Node *InitializeHeap();
  int FibonacciLink(Node *, Node *, Node *);
  Node *CreateNode(int);
  Node *Insert(Node *, Node *);
  Node *Union(Node *, Node *);
  Node *ExtractMin(Node *);
  int Consolidate(Node *);
  int Display(Node *);
  Node *Find(Node *, int);
  int DecreaseKey(Node *, int, int);
  int DeleteKey(Node *, int);
  int Cut(Node *, Node *, Node *);
  int CascaseCut(Node *, Node *);
  FibonacciHeap()
  {
    H = InitializeHeap();
  }
};

Node *FibonacciHeap::InitializeHeap()
{
  Node *np;
  np = NULL;
  return np;
}

Node *FibonacciHeap::CreateNode(int value)
{
  Node *x = new Node;
  x->n = value;
  return x;
}

Node *FibonacciHeap::Insert(Node *H, Node *x)
{
  x->degree = 0;
  x->parent = NULL;
  x->child = NULL;
  x->left = x;
  x->right = x;
  x->mark = 'F';
  x->C = 'N';
  if (H != NULL)
  {
    (H->left)->right = x;
    x->right = H;
    x->left = H->left;
    H->left = x;
    if (x->n < H->n)
      H = x;
  }
  else
  {
    H = x;
  }
  nH = nH + 1;
  return H;
}

int FibonacciHeap::FibonacciLink(Node *H1, Node *y, Node *z)
{
  (y->left)->right = y->right;
  (y->right)->left = y->left;
  if (z->right == z)
    H1 = z;
  y->left = y;
  y->right = y;
  y->parent = z;
  if (z->child == NULL)
    z->child = y;
  y->right = z->child;
  y->left = (z->child)->left;
  ((z->child)->left)->right = y;
  (z->child)->left = y;
  if (y->n < (z->child)->n)
    z->child = y;
  z->degree++;
}

Node *FibonacciHeap::Union(Node *H1, Node *H2)
{
  Node *np;
  Node *H = InitializeHeap();
  H = H1;
  (H->left)->right = H2;
  (H2->left)->right = H;
  np = H->left;
  H->left = H2->left;
  H2->left = np;
  return H;
}

int FibonacciHeap::Display(Node *H)
{
  Node *p = H;
  if (p == NULL)
  {
    cout << "Empty Heap" << endl;
    return 0;
  }
  cout << "Root Nodes: " << endl;
  do
  {
    cout << p->n;
    p = p->right;
    if (p != H)
    {
      cout << "-->";
    }
  } while (p != H && p->right != NULL);
  cout << endl;
}

Node *FibonacciHeap::ExtractMin(Node *H1)
{
  Node *p;
  Node *ptr;
  Node *z = H1;
  p = z;
  ptr = z;
  if (z == NULL)
    return z;

  Node *x;
  Node *np;

  x = NULL;

  if (z->child != NULL)
    x = z->child;

  if (x != NULL)
  {
    ptr = x;
    do
    {
      np = x->right;
      (H1->left)->right = x;
      x->right = H1;
      x->left = H1->left;
      H1->left = x;
      if (x->n < H1->n)
        H1 = x;

      x->parent = NULL;
      x = np;
    } while (np != ptr);
  }

  (z->left)->right = z->right;
  (z->right)->left = z->left;
  H1 = z->right;

  if (z == z->right && z->child == NULL)
    H = NULL;

  else
  {
    H1 = z->right;
    Consolidate(H1);
  }
  nH = nH - 1;
  return p;
}

int FibonacciHeap::Consolidate(Node *H1)
{
  int d, i;
  float f = (log(nH)) / (log(2));
  int D = f;
  Node *A[D];

  for (i = 0; i <= D; i++)
    A[i] = NULL;

  Node *x = H1;
  Node *y;
  Node *np;
  Node *pt = x;

  do
  {
    pt = pt->right;

    d = x->degree;

    while (A[d] != NULL)

    {
      y = A[d];

      if (x->n > y->n)

      {
        np = x;

        x = y;

        y = np;
      }

      if (y == H1)
        H1 = x;
      FibonacciLink(H1, y, x);
      if (x->right == x)
        H1 = x;
      A[d] = NULL;
      d = d + 1;
    }

    A[d] = x;
    x = x->right;

  }

  while (x != H1);
  H = NULL;
  for (int j = 0; j <= D; j++)
  {
    if (A[j] != NULL)
    {
      A[j]->left = A[j];
      A[j]->right = A[j];
      if (H != NULL)
      {
        (H->left)->right = A[j];
        A[j]->right = H;
        A[j]->left = H->left;
        H->left = A[j];
        if (A[j]->n < H->n)
          H = A[j];
      }
      else
      {
        H = A[j];
      }
      if (H == NULL)
        H = A[j];
      else if (A[j]->n < H->n)
        H = A[j];
    }
  }
}

int FibonacciHeap::DecreaseKey(Node *H1, int x, int k)
{
  Node *y;
  if (H1 == NULL)
  {
    cout << "The Heap is Empty." << endl;
    return 0;
  }
  Node *ptr = Find(H1, x);
  if (ptr == NULL)
  {
    cout << "Node not Found in the Heap" << endl;
    return 1;
  }

  if (ptr->n < k)
  {
    cout << "Entered key Greater than Current Key" << endl;
    return 0;
  }
  ptr->n = k;
  y = ptr->parent;
  if (y != NULL && ptr->n < y->n)
  {
    Cut(H1, ptr, y);
    CascaseCut(H1, y);
  }
  if (ptr->n < H->n)
    H = ptr;
  return 0;
}

int FibonacciHeap::Cut(Node *H1, Node *x, Node *y)
{
  if (x == x->right)
    y->child = NULL;
  (x->left)->right = x->right;
  (x->right)->left = x->left;
  if (x == y->child)
    y->child = x->right;
  y->degree = y->degree - 1;
  x->right = x;
  x->left = x;
  (H1->left)->right = x;
  x->right = H1;
  x->left = H1->left;
  H1->left = x;
  x->parent = NULL;
  x->mark = 'F';
}

int FibonacciHeap::CascaseCut(Node *H1, Node *y)
{
  Node *z = y->parent;
  if (z != NULL)
  {
    if (y->mark == 'F')
    {
      y->mark = 'T';
    }
    else
    {
      Cut(H1, y, z);
      CascaseCut(H1, z);
    }
  }
}

Node *FibonacciHeap::Find(Node *H, int k)
{
  Node *x = H;
  x->C = 'Y';
  Node *p = NULL;
  if (x->n == k)
  {
    p = x;
    x->C = 'N';
    return p;
  }

  if (p == NULL)
  {
    if (x->child != NULL)
      p = Find(x->child, k);
    if ((x->right)->C != 'Y')
      p = Find(x->right, k);
  }
  x->C = 'N';
  return p;
}

int FibonacciHeap::DeleteKey(Node *H1, int k)
{
  Node *np = NULL;
  int t;
  t = DecreaseKey(H1, k, -5000);
  if (!t)
    np = ExtractMin(H);
  if (np != NULL)
    cout << "Key Deleted" << endl;
  else
    cout << "Key not Deleted" << endl;
  return 0;
}

int main()
{
  int n, m, l;
  FibonacciHeap fh;
  Node *p;
  Node *H;
  int choice;
  H = fh.InitializeHeap();
  do
  {
    cout << "\n\nMenu\n";
    cout << " 1. Insert New Node \n";
    cout << " 2. Extract Min Node \n";
    cout << " 3. Decrease the key \n";
    cout << " 4. Delete the min key\n";
    cout << " 5. Display \n";
    cout << " 6. Exit \n";
    cout << "\nEnter the Choice:";
    cin >> choice;
    switch (choice)
    {
    case 1:
      cout << "Enter Element to be Inserted :";
      int Element;
      cin >> Element;
      p = fh.CreateNode(Element);
      H = fh.Insert(H, p);
      fh.Display(H);
      break;
    case 2:
      p = fh.ExtractMin(H);
      if (p != NULL)
        cout << "The Node with minimum key: " << p->n << endl;
      else
        cout << "Heap is Empty" << endl;
      fh.Display(H);
      break;
    case 3:
      cout << "Enter Value want to Decrease :";
      cin >> m;
      cout << "Enter the Decreased Value for the Node : ";
      cin >> l;
      fh.DecreaseKey(H, m, l);
      fh.Display(H);
      break;
    case 4:
      cout << "Enter the Value to be Deleted : ";
      fh.DeleteKey(H, m);
      fh.Display(H);
      break;
    case 5:
      fh.Display(H);
      break;
    }
  } while (choice != 6);
}