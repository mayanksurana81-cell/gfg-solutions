 /*
Category: Graph, Topological Sort

Approach:
- Build the adjacency list and compute the indegree of every vertex.
- Insert all vertices with indegree 0 into a queue.
- Perform Kahn's Algorithm:
  - Remove a node from the queue.
  - Increment the count of processed nodes.
  - Reduce the indegree of its neighbors.
  - If a neighbor's indegree becomes 0, push it into the queue.
- In a Directed Acyclic Graph (DAG), all vertices will be processed.
- If the number of processed vertices is less than V, some vertices are part of a cycle, so the graph contains a cycle.

Time Complexity: O(V + E)
Space Complexity: O(V)
 */
class Solution {
  public:
    bool isCyclic(int V, vector<vector<int>> &edges) {
        // code here
        vector<vector<int>> adj(V);
        vector<int>Indegree(V,0);
        int count = 0;
        queue<int> q;
        for(auto & e : edges){
            int u = e[0];
            int v = e[1];
            adj[u].push_back(v);
            Indegree[v]++;
        }
        for(int i = 0; i < V; i++){
            if(Indegree[i] == 0)q.push(i);
        }
        while(!q.empty()){
            int node = q.front();
            q.pop();
            count++;
            for(int neigh : adj[node]){
                Indegree[neigh]--;
                if(Indegree[neigh] == 0) q.push(neigh);
            }
        }
        
        return count != V;
    }
};