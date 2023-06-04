#include <iostream>
using namespace std;

void MaxHeapify(int *Array, int size, int k)
{
    int Large = k, L = 2 * k + 1, R = 2 * k + 2;
    if (L < size && Array[L] > Array[Large])
        Large = L;
    if (R < size && Array[R] > Array[Large])
        Large = R;

    if (Large != k)
    {
        int temp = Array[Large];
        Array[Large] = Array[k];
        Array[k] = temp;
        MaxHeapify(Array, size, Large);
    }
}

void HeapCreation(int *Array, int size)
{
    for (int k = (size - 2) / 2; k >= 0; k--)
        MaxHeapify(Array, size, k);

    cout << "\n Build heap: ";
    for (int k = 0; k < size; k++)
        cout << Array[k] << " ";
    cout << endl;
}

void HeapSort(int *Array, int size)
{
    int count = 0;
    HeapCreation(Array, size);
    for (int k = size - 1; k >= 1; k--)
    {
        int temp = Array[0];
        Array[0] = Array[k];
        Array[k] = temp;
        MaxHeapify(Array, k, 0);

        cout << "\nOn Iteration " << (++count) << " Array: ";
        for (int k = 0; k < size; k++)
            cout << Array[k] << " ";
    }
}

int main()
{
    int n = 0;
    cout << "\nEnter size of Array: ";
    cin >> n;
    int Array[n];
    cout << "\nEnter Elements of Array:";
    for (int k = 0; k < n; k++)
        cin >> Array[k];
    cout << endl;

    cout << "\nBefore Sorting:" << endl;
    for (int k = 0; k < n; k++)
        cout << Array[k] << " ";
    HeapSort(Array, n);
    cout << "\nAfter Sorting:";
    for (int k = 0; k < n; k++)
        cout << Array[k] << " ";
    return 0;
}