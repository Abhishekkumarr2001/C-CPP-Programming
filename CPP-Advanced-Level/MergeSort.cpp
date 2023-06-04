#include <iostream>
using namespace std;

void Merging(int A[], int start, int mid, int end)
{
    int n1 = mid - start + 1, n2 = end - mid;
    int i, j, k, LeftArray[n1], RightArray[n2];
    for (i = 0; i < n1; i++)
        LeftArray[i] = A[start + i];
    for (j = 0; j < n2; j++)
        RightArray[j] = A[mid + 1 + j];

    i = 0;
    j = 0;
    k = start;

    while (i < n1 && j < n2)
    {
        if (LeftArray[i] <= RightArray[j])
        {
            A[k] = LeftArray[i];
            i++;
        }
        else
        {
            A[k] = RightArray[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        A[k] = LeftArray[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        A[k] = RightArray[j];
        j++;
        k++;
    }
    cout << "Merging function: ";
    for (int i = start; i <= end; i++)
        cout << A[i] << " ";
    cout << endl
         << endl;
}

void MergeSort(int A[], int start, int end)
{
    static int n = end + 1;
    if (start < end)
    {
        int mid = (start + end) / 2;
        MergeSort(A, start, mid);
        MergeSort(A, mid + 1, end);
        Merging(A, start, mid, end);
        cout << "Merge Sort :  ";
        for (int i = 0; i < n; i++)
            cout << A[i] << " ";
        cout << endl;
    }
}

int main()
{
    int i, n, Arr[50];
    cout << "\nEnter the number of elements: ";
    cin >> n;
    cout << "\nEnter the elements of Array: ";
    for (i = 0; i < n; i++)
        cin >> Arr[i];
    MergeSort(Arr, 0, n - 1);
    cout << "\nSorted Array using Merge Sort: ";
    for (i = 0; i < n; i++)
        cout << Arr[i] << " ";
    return 0;
}