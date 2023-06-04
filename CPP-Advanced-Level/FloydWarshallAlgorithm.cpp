#include <iostream>
using namespace std;
#define nV 4
#define INF 1000
void DisplayMatrix(int Array[][nV])
{
    for (int a = 0; a < nV; a++)
    {
        for (int b = 0; b < nV; b++)
        {
            if (Array[a][b] == INF)
                printf("%4s", "INF");
            else
                printf("%4d", Array[a][b]);
        }
        printf("\n");
    }
}
void FloydWarshallAlgorithm(int G[][nV])
{
    int Array[nV][nV], a, b, c;
    for (a = 0; a < nV; a++)
        for (b = 0; b < nV; b++)
            Array[a][b] = G[a][b];
    for (c = 0; c < nV; c++)
        for (a = 0; a < nV; a++)
            for (b = 0; b < nV; b++)
                if (Array[a][c] + Array[c][b] < Array[a][b])
                    Array[a][b] = Array[a][c] + Array[c][b];
    printf("\n\n");
    DisplayMatrix(Array);
}
int main()
{
    int G[nV][nV] = {{0, 3, INF, 5}, {2, 0, INF, 4}, {INF, 1, 0, INF}, {INF, INF, 2, 0}};
    FloydWarshallAlgorithm(G);
    return 0;
}