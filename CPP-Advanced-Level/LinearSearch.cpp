#include <iostream>
using namespace std;
int main()
{
    int Array[50], n, num, position, flag = 0;
    cout << "\nEnter the size of Array: ";
    cin >> n;
    cout << "\nEnter the Elements of Array: ";
    for (int i = 0; i < n; i++)
        cin >> Array[i];
    cout << "\nEnter the Element to be Searched: ";
    cin >> num;
    cout << "\n";
    for (int i = 0; i < n; i++)
    {
        if (Array[i] == num)
        {
            position = i + 1;
            cout << "The Element is at Position: " << position << endl;
            flag = 1;
        }
    }
    if (flag == 0)
        cout << "\nElement is not found " << endl;
    return 0;
}
