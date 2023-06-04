#include <stdio.h>
int MaxValue(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}
void Knapsack(int WeightKnapSack, int NumberI, int ValueI[], int WeightI[])
{
    int i, w;
    int V[NumberI + 1][WeightKnapSack + 1];
    for (w = 0; w <= WeightKnapSack; w++)
        V[0][w] = 0;
    for (i = 0; i <= NumberI; i++)
        V[i][0] = 0;
    for (i = 1; i <= NumberI; i++)
    {
        for (w = 1; w <= WeightKnapSack; w++)
        {
            if (WeightI[i] <= w)
                V[i][w] = MaxValue(V[i - 1][w], ValueI[i] + V[i - 1][w - WeightI[i]]);
            else
                V[i][w] = V[i - 1][w];
        }
    }
    printf("\n\nMax Value: %d\n", V[NumberI][WeightKnapSack]);
}

int main(void)
{
    int ValueI[] = {-1, 1200, 220, 260, 240};
    int WeightI[] = {-1, 3, 2, 4, 1};
    int NumberI = 4;
    int WeightKnapSack = 5;
    Knapsack(WeightKnapSack, NumberI, ValueI, WeightI);
    return 0;
}
