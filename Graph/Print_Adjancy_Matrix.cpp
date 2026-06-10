 /*
Category: Graph, Adjacency List

Approach:
- Create an adjacency list with V vertices.
- Traverse all given edges.
- For each undirected edge (u, v):
  - Add v to the adjacency list of u.
  - Add u to the adjacency list of v.
- After processing all edges, the adjacency list represents the graph connections for every vertex.

Time Complexity: O(V + E)
Space Complexity: O(V + E)
 */
class Solution {
  public:
    vector<vector<int>> printGraph(int V, vector<pair<int, int>>& edges) {
        // code here
        vector<vector<int>>AdjList(V);
        for(auto e : edges){
            int u = e.first;
            int v = e.second;
            AdjList[u].push_back(v);
            AdjList[v].push_back(u);
        }
        return AdjList;
        
    }
};