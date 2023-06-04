#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
struct Job
{
    char ID;
    int Deadline;
    int Profit;
};

bool Comparison(Job a, Job b)
{
    return (a.Profit > b.Profit);
}

void JobScheduling(Job Array[], int n)
{
    sort(Array, Array + n, Comparison);
    bool slot[n];
    int result[n];
    for (int i = 0; i < n; i++)
        slot[i] = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = min(n, Array[i].Deadline) - 1; j >= 0; j--)
        {
            if (slot[j] == false)
            {
                result[j] = i;
                slot[j] = true;
                break;
            }
        }
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
        if (slot[i])
        {
            cout << Array[result[i]].ID << " ";
            sum += Array[result[i]].Profit;
        }
    cout << "\nThe Maximum Profit is : " << sum << endl
         << endl;
}
int main()
{
    int n;
    cout << "\n\nEnter Number of Jobs : ";
    cin >> n;
    cout << "\nEnter JobID, Deadline and Profit of each Job : ";
    Job Array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> Array[i].ID;
        cin >> Array[i].Deadline;
        cin >> Array[i].Profit;
    }
    cout << "\nFollowing is Maximum Profit Sequence of Jobs : ";
    JobScheduling(Array, n);
    return 0;
}