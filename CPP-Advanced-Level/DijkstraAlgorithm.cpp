#include <iostream>
using namespace std;
#include <limits.h>
#define V 5

int MinDistance(int Distance[], bool Temp[])
{
    int min = INT_MAX, minIndex;
    for (int v = 0; v < V; v++)
        if (Temp[v] == false && Distance[v] <= min)
        {
            min = Distance[v];
            minIndex = v;
        }
    return minIndex;
}

void Display(int Distance[])
{
    cout << "Vertex \t Distance from Source" << endl;
    for (int i = 0; i < V; i++)
        cout << i << "\t\t" << Distance[i] << endl;
}

void Dijkstra(int Graph[V][V], int Source)
{
    int Distance[V];
    bool Temp[V];
    for (int i = 0; i < V; i++)
        Distance[i] = INT_MAX, Temp[i] = false;
    Distance[Source] = 0;
    for (int count = 0; count < V - 1; count++)
    {
        int u = MinDistance(Distance, Temp);
        Temp[u] = true;
        for (int v = 0; v < V; v++)
            if (!Temp[v] && Graph[u][v] && Distance[u] != INT_MAX && Distance[u] + Graph[u][v] < Distance[v])
                Distance[v] = Distance[u] + Graph[u][v];
    }
    Display(Distance);
}

int main()
{
    int Graph[V][V];
    cout << "\n\nEnter the Elements:\n";
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
            cin >> Graph[i][j];
    }
    Dijkstra(Graph, 0);
    return 0;
}