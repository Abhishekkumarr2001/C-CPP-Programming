#include <bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
typedef pair<int, int> iPair;

void addEdge(vector<pair<int, int>> adj[], int u, int v, int wt)
{
    adj[u].push_back(make_pair(v, wt));
    adj[v].push_back(make_pair(u, wt));
}

void primMST(vector<pair<int, int>> adj[], int V)
{
    priority_queue<iPair, vector<iPair>, greater<iPair>> pq;
    int src = 0;
    vector<int> key(V, INF);
    vector<int> parent(V, -1);
    vector<bool> inMST(V, false);
    pq.push(make_pair(0, src));
    key[src] = 0;
    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();
        if (inMST[u] == true)
        {
            continue;
        }
        inMST[u] = true;
        for (auto x : adj[u])
        {
            int v = x.first;
            int weight = x.second;
            if (inMST[v] == false && key[v] > weight)
            {
                key[v] = weight;
                pq.push(make_pair(key[v], v));
                parent[v] = u;
            }
        }
    }
    for (int i = 1; i < V; ++i)
        printf("%d - %d\n", parent[i], i);
}

int main()
{
    int V, E;
    cout << "\n\nEnter Number of Nodes and Edges: ";
    cin >> V >> E;
    vector<iPair> adj[V];
    for (int i = 0; i < E; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        addEdge(adj, x, y, z);
    }
    primMST(adj, V);
    return 0;
}
