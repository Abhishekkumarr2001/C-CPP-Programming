#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "\n\nEnter the Size of Array:";
	cin >> n;
	int arr[n];
	cout << "\nEnter the Elements of Array:";
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 1; i < n; i++)
	{
		int Key = arr[i];
		int j = i - 1;
		while (Key < arr[j] && j >= 0)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = Key;
		cout << "Key: " << Key << endl;
		// printing iterations of insertion sort
		for (int i = 0; i < n; i++)
			cout << arr[i] << " ";
		cout << endl;
	}
	cout << "\nSorted Array is: " << endl;
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	return 0;
}
