#include <iostream>
using namespace std;
int n;

void ArrayDisplay(int Array[])
{
    for (int i = 0; i < n; i++)
        cout << Array[i] << " ";
    cout << endl;
}

int Partition(int Array[], int l, int r)
{
    int Pivot = Array[r];
    int Index = l;
    for (int i = l; i <= r - 1; i++)
    {
        if (Array[i] < Pivot)
        {
            swap(Array[i], Array[Index]);
            Index++;
        }
    }
    swap(Array[Index], Array[r]);
    return Index;
}

void QuickSort(int Array[], int l, int r)
{
    if (l < r)
    {
        int p = Partition(Array, l, r);
        ArrayDisplay(Array);
        QuickSort(Array, l, p - 1);
        QuickSort(Array, p + 1, r);
    }
}

int main()
{
    cout << "\n\nEnter The Number Of Elements: ";
    cin >> n;
    int Array[n];
    cout << "Enter The Elements to be Sorted: ";
    for (int i = 0; i < n; i++)
        cin >> Array[i];
    QuickSort(Array, 0, n - 1);
    cout << "\nSorted Array: ";
    ArrayDisplay(Array);
    return 0;
}
