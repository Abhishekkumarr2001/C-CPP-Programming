#include <iostream>
using namespace std;
int main()
{
    int i, arr[10], n, num, first, last, middle;
    cout << "\nEnter size of Array:";
    cin >> n;
    cout << "Enter Elements in ascending order: ";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    cout << "\nEnter Element to be Search: ";
    cin >> num;
    first = 0;
    last = n - 1;
    middle = (first + last) / 2;
    while (first <= last)
    {
        if (arr[middle] < num)
            first = middle + 1;
        else if (arr[middle] == num)
        {
            cout << "\nThe number " << num << " found at Position " << middle + 1 << endl;
            break;
        }
        else
            last = middle - 1;
        middle = (first + last) / 2;
    }
    if (first > last)
        cout << "\nThe number " << num << " is not found in given Array" << endl;
    cout << endl;
    return 0;
}