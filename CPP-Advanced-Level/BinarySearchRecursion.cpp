#include <iostream>
using namespace std;

int BinarySearch(int arr[], int num, int beg, int end)
{
    int mid;
    if (beg > end)
    {
        cout << "Number is not found.";
        return 0;
    }
    else
    {
        mid = (beg + end) / 2;
        if (arr[mid] == num)
        {
            cout << "Number is found at Position : " << mid + 1 << endl;
            return 0;
        }
        else if (num > arr[mid])
        {
            BinarySearch(arr, num, mid + 1, end);
        }
        else if (num < arr[mid])
        {
            BinarySearch(arr, num, beg, mid - 1);
        }
    }
    return 0;
}

int main()
{
    int arr[100], num, i, n, beg, end;
    cout << "\n\nEnter the size of an array: ";
    cin >> n;
    cout << "Enter the sorted values: ";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter a value to be search: ";
    cin >> num;
    BinarySearch(arr, num, 0, n - 1);
    return 0;
}