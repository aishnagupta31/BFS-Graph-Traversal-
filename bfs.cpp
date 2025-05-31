#include <bits/stdc++.h>
using namespace std;

void BFS(int vertices, vector<vector<int>>& adj) {
    queue<int> q;
    vector<int> visited(vertices + 1, 0);
    int s;
    cin >> s;  // Starting node for BFS
    q.push(s);
    visited[s] = 1;
    
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";
        
        for (auto it : adj[node]) {
            if (visited[it] == 0) {
                q.push(it);
                visited[it] = 1;
            }
        }
    }
    cout << endl;
}

int main() {
    int vertices, edges;
    cin >> vertices >> edges;
    
    vector<vector<int>> adj(vertices + 1);  // Adjacency list
    
    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);  // Undirected graph
    }
    
    BFS(vertices, adj);  // Perform BFS
    
    // Printing the adjacency list of the graph
    for (int i = 1; i <= vertices; i++) {
        cout << i << ": ";
        for (auto it : adj[i]) {
            cout << it << " ";
        }
        cout << endl;
    }
    
    return 0;
}
