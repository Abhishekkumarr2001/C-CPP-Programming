// Program Using A Class To Store Price List Of 5 Items And To Print The Largest Price As Well As The Sum Of All The Prices.
#include <iostream.h>
#include <conio.h>
#include <process.h>
class item
{ // definition of a class
    int itemcode[5];
    float it_price[5];

public:
    void initialize(void);
    float largest(void);
    float sum(void);
    void display_items(void);
};
// Definitions of member functions
void item::initialize(void)
{
    for (int i = 0; i < 5; i++)
    {
        cout << "\nItem No:" << (i + 1);
        cout << "\nEnter item code:";
        cin >> itemcode[i];
        cout << "\nEnter item price:";
        cin >> it_price[i];
        cout << endl;
    }
}
float item::largest(void)
{
    float large = it_price[0];
    for (int i = 1; i < 5; i++)
        if (large < it_price[i])
            large = it_price[i];
    return large;
}
float item::sum(void)
{
    float sum = 0.0;
    for (int i = 0; i < 5; i++)
        sum += it_price[i];
    return sum;
}
void item::display_items(void)
{
    cout << "\nCode\t\tprice\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "\n"
             << itemcode[i];
        cout << "\t\t" << it_price[i];
        cout << endl;
    }
    cout << endl;
}
void main()
{
    clrscr();
    item order;         // creating object
    order.initialize(); // initialize arrays;
    float total, biggest;
    int ch = 0;
    clrscr();
    do
    {
        cout << "\n\t***Main Menu***";
        cout << "\n\n1. Display largest price.";
        cout << "\n\n2. Display sum of prices.";
        cout << "\n\n3. Display item list.";
        cout << "\n\n4. Quit";
        cout << "\n\nEnter your choice(1..4) :";
        cin >> ch;
        switch (ch)
        {
        case 1:
            biggest = order.largest();
            cout << "\nThe largest price is " << biggest;
            cout << endl;
            break;
        case 2:
            total = order.sum();
            cout << "\nThe sum of price is " << total;
            cout << endl;
            break;
        case 3:
            order.display_items();
            cout << endl;
            break;
        case 4:
            exit(0);
        default:
            cout << "\nWrong Choice!\n";
            break;
        }
        cout << "\nPress any key to continue................";
        getch();
        clrscr();
    } while (ch != 4);
}
