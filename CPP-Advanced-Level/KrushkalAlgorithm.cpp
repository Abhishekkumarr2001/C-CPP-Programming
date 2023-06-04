#include <bits/stdc++.h>
using namespace std;
class DSU
{
    int *Parent;
    int *Rank;

public:
    DSU(int n)
    {
        Parent = new int[n];
        Rank = new int[n];
        for (int j = 0; j < n; j++)
        {
            Parent[j] = -1;
            Rank[j] = 1;
        }
    }
    int find(int j)
    {
        if (Parent[j] == -1)
            return j;
        return Parent[j] = find(Parent[j]);
    }
    void unite(int x, int y)
    {
        int s1 = find(x);
        int s2 = find(y);
        if (s1 != s2)
        {
            if (Rank[s1] < Rank[s2])
            {
                Parent[s1] = s2;
                Rank[s2] += Rank[s1];
            }
            else
            {
                Parent[s2] = s1;
                Rank[s1] += Rank[s2];
            }
        }
    }
};

class Graph
{
    vector<vector<int>> edgelist;
    int V;

public:
    Graph(int V)
    {
        this->V = V;
    }
    void addEdge(int x, int y, int w)
    {
        edgelist.push_back({w, x, y});
    }
    void kruskals_mst()
    {
        sort(edgelist.begin(), edgelist.end());
        DSU s(V);
        int ans = 0;
        cout << "Following are Edges in the constructed MST" << endl;
        for (auto edge : edgelist)
        {
            int w = edge[0];
            int x = edge[1];
            int y = edge[2];
            if (s.find(x) != s.find(y))
            {
                s.unite(x, y);
                ans += w;
                cout << x << " -- " << y << " == " << w << endl;
            }
        }
        cout << "Minimum Cost Spanning Tree: " << ans;
    }
};
int main()
{
    int n, m;
    cout << "\n\nEnter Number of Nodes and Edges : ";
    cin >> n >> m;
    Graph g(n);
    for (int j = 0; j < m; j++)
    {
        int x, y, w;
        cin >> x >> y >> w;
        g.addEdge(x, y, w);
    }
    g.kruskals_mst();
    return 0;
}
