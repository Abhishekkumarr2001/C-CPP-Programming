#include <stdio.h>
int main()
{
    int Capacity, NoItems, CurWeight, Item, Used[10];
    float TotalProfit;
    int i, Weight[10], Value[10];
    printf("\n\nEnter Capacity of Knapsack :");
    scanf("%d", &Capacity);
    printf("\nEnter Number of Items :");
    scanf("%d", &NoItems);
    printf("Enter Weight and Value of %d Item:\n", NoItems);
    for (i = 0; i < NoItems; i++)
    {
        printf("Weight [%d] :", i + 1);
        scanf("%d", &Weight[i]);
        printf("Value [%d] :", i + 1);
        scanf("%d", &Value[i]);
    }
    for (i = 0; i < NoItems; ++i)
        Used[i] = 0;
    CurWeight = Capacity;
    while (CurWeight > 0)
    {
        Item = -1;
        for (i = 0; i < NoItems; ++i)
            if ((Used[i] == 0) && ((Item == -1) || ((float)Value[i] / Weight[i] > (float)Value[Item] / Weight[Item])))
                Item = i;
        Used[Item] = 1;
        CurWeight -= Weight[Item];
        TotalProfit += Value[Item];
        if (CurWeight >= 0)
            printf("Added Object %d (%d Rs. %d Kg) Completely in Bag. Space left: %d.\n", Item + 1, Value[Item], Weight[Item], CurWeight);
        else
        {
            int item_percent = (int)((1 + (float)CurWeight / Weight[Item]) * 100);
            printf("Added %d%% (%d Rs. %d Kg) of object %d in the bag.\n", item_percent, Value[Item], Weight[Item], Item + 1);
            TotalProfit -= Value[Item];
            TotalProfit += (1 + (float)CurWeight / Weight[Item]) * Value[Item];
        }
    }
    printf("Filled the Bag with Objects Worth %.2f Rs.\n", TotalProfit, " ");
    return 0;
}
