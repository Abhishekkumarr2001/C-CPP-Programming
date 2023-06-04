#include <iostream>
using namespace std;
int main()
{
    int arr[50], i, j, k, n, temp, smallest;
    cout << "\nEnter the number of elements : ";
    cin >> n;
    cout << "\nEnter the elements : ";
    for (i = 0; i < n; i++)
        cin >> arr[i];

    cout << "\nUnsorted list is :";
    for (i = 0; i < n; i++)
        cout << " " << arr[i];
    cout << "\n";

    for (i = 0; i < n - 1; i++)
    {
        smallest = i;
        for (k = i + 1; k < n; k++)
        {
            if (arr[smallest] > arr[k])
                smallest = k;
        }
        if (i != smallest)
        {
            temp = arr[i];
            arr[i] = arr[smallest];
            arr[smallest] = temp;
        }
        cout << "\nAfter " << i + 1 << " iteration elements are : ";
        for (j = 0; j < n; j++)
            cout << " " << arr[j];
        cout << "\n";
    }

    cout << "\nSorted list is : ";
    for (i = 0; i < n; i++)
        cout << " " << arr[i];
    cout << "\n\n";
    return 0;
}
