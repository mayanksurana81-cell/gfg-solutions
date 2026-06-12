 /*
Category: Graph, Depth First Search

Approach:
- Convert the edge list into an adjacency list representation.
- Traverse every connected component using DFS.
- During DFS:
  - Mark the current node as visited.
  - For each adjacent node:
    - If it is unvisited, continue DFS recursively.
    - If it is already visited and is not the parent node, a cycle exists.
- A parent parameter is maintained to distinguish a valid back edge to the parent from an actual cycle.
- If a cycle is detected in any component, return true.

Time Complexity: O(V + E)
Space Complexity: O(V)
 */
class Solution {
    bool cycle = false;
  public:
  void dfs(int curr, vector<bool> &vis, vector<vector<int>>& adj,int src){
      vis[curr] = true;
      for(int neigh : adj[curr]){
          if(!vis[neigh]){
              dfs(neigh,vis,adj,curr);
          }
          else if(neigh != src) cycle = true;
          if(cycle) return;
      }
  }
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        vector<vector<int>> adj(V);
        vector<bool> visited(V,false);
        for(auto & e : edges){
            int u = e[0];
            int v = e[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        for(int i = 0; i<V; i++){
            if(!visited[i]){
                dfs(i,visited,adj,-1);
            }
        }
        return cycle;
    }
};