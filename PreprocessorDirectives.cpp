// Program Demonstrating Preprocessor Directives
#include <iostream.h>
#include <conio.h>
#define SQUARE(X) X *X
void main()
{
        typedef float amount; // amount is new name for float
        amount S;
        cout << "\nEnter side of square:";
        cin >> S;
        cout << "\nArea of square=" << SQUARE(S);
        getch();
}

// // Program Demonstrating Preprocessor Directives
// #include <iostream.h>
// #include <conio.h>
// #define PI 3.1419
// void main()
// {
//         int r = 10;
//         float cir;
//         cir = PI * (r * r);
//         cout << "\nArea of circle=" << cir;
//         getch();
// }