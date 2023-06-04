#include <bits/stdc++.h>
using namespace std;
void printMaxActivities(int S[], int F[], int n)
{
    int i = 0, j;
    cout << "\nFollowing Activities are Selected :";
    cout << " " << i;
    for (j = 1; j < n; j++)
    {
        if (S[j] >= F[i])
        {
            cout << " " << j;
            i = j;
        }
    }
}
int main()
{
    int n;
    cout << "\n\nEnter Number of Activities :";
    cin >> n;
    cout << "\nEnter the Start Timings of Activities :";
    int Start[n];
    for (int i = 0; i < n; i++)
        cin >> Start[i];
    cout << "\nEnter the End Timimgs of Activities : ";
    int Finish[n];
    for (int i = 0; i < n; i++)
        cin >> Finish[i];
    printMaxActivities(Start, Finish, n);
    return 0;
}
