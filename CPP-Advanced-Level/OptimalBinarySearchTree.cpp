#include <bits/stdc++.h>
using namespace std;
int Sum(int Freq[], int k, int j)
{
    int Sum = 0;
    for (int x = k; x <= j; x++)
        Sum += Freq[x];
    return Sum;
}
int OptimalCost(int Freq[], int k, int j)
{
    if (j < k)
        return 0;
    if (j == k)
        return Freq[k];
    int frequencySum = Sum(Freq, k, j);
    int min = INT_MAX;
    for (int r = k; r <= j; ++r)
    {
        int cost = OptimalCost(Freq, k, r - 1) + OptimalCost(Freq, r + 1, j);
        if (cost < min)
            min = cost;
    }
    return min + frequencySum;
}
int optimalSearchTree(int Key[], int Freq[], int n)
{
    return OptimalCost(Freq, 0, n - 1);
}
int main()
{
    int Key[] = {10, 12, 20};
    int Freq[] = {34, 8, 50};
    int n = sizeof(Key) / sizeof(Key[0]);
    cout << "\n\nCost of Optimal BinarySearchTree is: " << optimalSearchTree(Key, Freq, n);
    return 0;
}
