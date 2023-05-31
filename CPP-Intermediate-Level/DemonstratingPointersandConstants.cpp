// Program To Demonstrate Pointers & Constants
#include <iostream.h>
#include <conio.h>
void main()
{
    int n = 44;
    int *ptr = &n;
    ++(*ptr); // valid statement-inc. value pointed by ptr
    cout << "\n++n=" << *ptr;
    int *const cptr = &n;               // a const pointer to an int
    cout << "\n++(*cptr)" << ++(*cptr); // valid increments contents pointed by cptr
    cout << "\n++cptr" << ++cptr;       // illegal-address can't be modified
    const int kn = 80;
    const int *ptrC = &kn; // a pointer to a const int
    cout << ++(*ptrC);     // illegal-content's can't be modified
    cout << endl
         << ++ptrC;               // address is incremented
    const int *const cptrC = &kn; // const pointer to a const int
    cout << ++(*cptrC);           // illegal
    cout << ++cptrC;              // illegal
    getch();
}