// Program To Illustrate The Use Of Object Arrays For Storing Details Of 5 Items In An Array Of Objects
#include <iostream.h>
#include <conio.h>
class Item
{
    int itemno;
    float price;

public:
    void getdata(int i, float j)
    {
        itemno = i;
        price = j;
    }
    void putdata(void)
    {
        cout << "\nItemno:" << itemno << "\t";
        cout << "Price:" << price << "\n";
    }
};
const int size = 5;
Item order[size]; // creating array of objects(global objects)
void main()
{
    int ino;
    float cost;
    // Get values for all items
    for (int a = 0; a < size; a++)
    {
        cout << "\nEnter itemno & price for item" << a + 1 << "\n";
        cin >> ino >> cost;
        order[a].getdata(ino, cost); // invoke getdata() function
    }
    // Print details
    for (a = 0; a < size; a++)
    {
        cout << "Item" << a + 1 << "\n";
        order[a].putdata();
    }
    getch();
}
