/*
Category: Graph, Depth-First Search (DFS)

Approach:
- Build an adjacency list from the given edge list to represent the undirected graph.
- Traverse all vertices and start a DFS from every unvisited vertex.
- Each DFS marks all vertices in the same connected component as visited.
- Count the number of DFS traversals performed, which equals the number of connected components.

Time Complexity: O(V + E)
Space Complexity: O(V + E)
*/
class Solution {
    private:
    void dfs(int node,vector<bool>& vis,vector<vector<int>>& adj){
        vis[node] = true;
        for(auto it : adj[node]){
            if(!vis[it]){
                dfs(it,vis,adj);
            }
        }
    }
  public:
    int countConnected(int V, vector<vector<int>>& edges) {
        
        // code here
        vector<vector<int>> adj(V);
        for(auto &it : edges){
            int u = it[0];
            int v = it[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<bool> visited(V,false);
        int count = 0;
        for(int i = 0; i < V; i++){
            if(!visited[i]){
                dfs(i, visited, adj);
                count++;
            }
        }
        return count;
    }
};