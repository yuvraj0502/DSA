// In kruskal algorithm,sort all edges of the given graph in increasing order.Then it 
// keeps on adding the news edges and nodes in the MST(minimum spanning tree) if the
// newly added edges dose not form the cycle.It picks the minimum weighted edges 
// at the first and maximum weighted edges the last.
// The algorithm is used to find the Minimum Spanning Tree (MST) of a connected,
// weighted, and undirected graph. The MST is a subgraph that connects all the
// vertices of the graph with the minimum possible total edge weight and without
// forming any cycles.
// Time Complexity: O(ElogE)


#include<bits/stdc++.h>
using namespace std;

struct Edge {
    int u, v, weight;
};

bool compare(Edge a, Edge b) {
    return a.weight < b.weight;
}

int findParent(int node, vector<int>& parent) {
    if (parent[node] != node)
        parent[node] = findParent(parent[node], parent);
    return parent[node];
}

void unionSets(int u, int v, vector<int>& parent, vector<int>& rank) {
    int rootU = findParent(u, parent);
    int rootV = findParent(v, parent);

    if (rootU != rootV) {
        if (rank[rootU] > rank[rootV]) {
            parent[rootV] = rootU;
        } else if (rank[rootU] < rank[rootV]) {
            parent[rootU] = rootV;
        } else {
            parent[rootV] = rootU;
            rank[rootU]++;
        }
    }
}

void kruskalMST(int n, vector<Edge>& edges) {
    sort(edges.begin(), edges.end(), compare);

    vector<int> parent(n), rank(n, 0);

    vector<Edge> mst; 
    int totalWeight = 0;

    for (Edge edge : edges) {
        int uParent = findParent(edge.u, parent);
        int vParent = findParent(edge.v, parent);

        if (uParent != vParent) {
            mst.push_back(edge);
            totalWeight += edge.weight;
            unionSets(uParent, vParent, parent, rank);
        }
    }

    cout << "Edges in the Minimum Spanning Tree:\n";
    for (Edge edge : mst) {
        cout << edge.u << " - " << edge.v << " : " << edge.weight << "\n";
    }
    cout << "Total weight of MST: " << totalWeight << "\n";
}

int main() {
    int n = 4; 
    vector<Edge> edges;

    

    edges.push_back({0, 1, 10});
    edges.push_back({1, 3, 15});
    edges.push_back({2, 3, 4});
    edges.push_back({2, 0, 6});
    edges.push_back({0, 3, 5});

    kruskalMST(n, edges);

    return 0;
}


