#include <bits/stdc++.h>
struct Edge
{
    int Src, dest, Weight;
};
struct Graph
{
    int V, E;
    struct Edge *Ed;
};
struct Graph *createGraph(int V, int E)
{
    struct Graph *G = new Graph;
    G->V = V;
    G->E = E;
    G->Ed = new Edge[E];
    return G;
}
void BellmanFord(struct Graph *G, int Src)
{
    int V = G->V;
    int E = G->E;
    int dist[V];
    for (int k = 0; k < V; k++)
        dist[k] = INT_MAX;
    dist[Src] = 0;
    for (int k = 1; k <= V - 1; k++)
    {
        for (int j = 0; j < E; j++)
        {
            int u = G->Ed[j].Src;
            int v = G->Ed[j].dest;
            int Weight = G->Ed[j].Weight;
            if (dist[u] != INT_MAX && dist[u] + Weight < dist[v])
                dist[v] = dist[u] + Weight;
        }
    }
    for (int k = 0; k < E; k++)
    {
        int u = G->Ed[k].Src;
        int v = G->Ed[k].dest;
        int Weight = G->Ed[k].Weight;
        if (dist[u] != INT_MAX && dist[u] + Weight < dist[v])
        {
            printf("Error - Graph contains negative Weight cycle.");
            return;
        }
    }
    printf("\n\nVertex :\t\t\t ");
    for (int k = 0; k < V; ++k)
        printf("%d \t", k);
    printf("\nDistance From Source : ");
    for (int k = 0; k < V; ++k)
        printf("%d \t", dist[k]);
    printf("\n\n");
    return;
}
int main()
{
    int V = 5;
    int E = 8;
    struct Graph *G = createGraph(V, E);
    G->Ed[0].Src = 0;
    G->Ed[0].dest = 1;
    G->Ed[0].Weight = -1;
    G->Ed[1].Src = 0;
    G->Ed[1].dest = 2;
    G->Ed[1].Weight = 4;
    G->Ed[2].Src = 1;
    G->Ed[2].dest = 2;
    G->Ed[2].Weight = 3;
    G->Ed[3].Src = 1;
    G->Ed[3].dest = 3;
    G->Ed[3].Weight = 2;
    G->Ed[4].Src = 1;
    G->Ed[4].dest = 4;
    G->Ed[4].Weight = 2;
    G->Ed[5].Src = 3;
    G->Ed[5].dest = 2;
    G->Ed[5].Weight = 5;
    G->Ed[6].Src = 3;
    G->Ed[6].dest = 1;
    G->Ed[6].Weight = 1;
    G->Ed[7].Src = 4;
    G->Ed[7].dest = 3;
    G->Ed[7].Weight = -3;
    BellmanFord(G, 0);
    return 0;
}