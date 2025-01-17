//This algorithm always starts with a single nodes and moves throught sereval adjacent
//nodes in order to explore all the connected edges along the way
//The algorithm is used to find the minimum spanning tree for a connected weighted graph.
//Prim`s Algorithm is a greedy algorithm used to find the Minimum Spanning Tree (MST) 
//of a connected, weighted, and undirected graph. The MST is a subgraph that connects all 
//the vertices of the graph with the minimum possible total edge weight and without 
//forming any cycles.
//Time Complexity: O(ElogV)

#include <bits/stdc++.h>
using namespace std;

int spanningTree(int V,int W,vector<vector<int>>&edges){
    vector<vector<int>>adj[V];
    for(int i=0;i<W;i++){
        adj[edges[i][0]].push_back({edges[i][1],edges[i][2]});
        adj[edges[i][1]].push_back({edges[i][0],edges[i][2]});
    };

    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    vector<bool>visited(V,false);
    int minCost=0;
    pq.push({0,0});

    while(!pq.empty()){
        pair<int,int> p=pq.top();
        pq.pop();
        int x=p.second;
        if(visited[x]){
            continue;
        }
        minCost+=p.first;
        visited[x]=true;
        for(int i=0;i<adj[x].size();i++){
            if(!visited[adj[x][i][0]]){
                pq.push({adj[x][i][1],adj[x][i][0]});
            }
        }
    }
    return minCost;
};

int main(){
    int V=5;
    int W=7;
    vector<vector<int>>edges={{0,1,2},{0,3,6},{1,3,8},{1,2,3},{1,4,5},{2,4,7},{3,4,9}};
    cout<<spanningTree(V,W,edges);
    return 0;
}