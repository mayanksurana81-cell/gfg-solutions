 /*
Category: Graph, Depth First Search

Approach:
- Start DFS traversal from vertex 0.
- Mark the current node as visited and add it to the answer.
- Recursively visit all unvisited adjacent vertices.
- Continue exploring as deep as possible before backtracking.
- The traversal order produced by the recursive calls forms the DFS traversal of the graph.

Time Complexity: O(V + E)
Space Complexity: O(V)
 */
class Solution {
  public:
    void helper(int curr,vector<vector<int>>& adj,vector<bool> &visited,vector<int>&ans){
        
        ans.push_back(curr);
        visited[curr] = true;
        for(auto neigh : adj[curr]){
            if(visited[neigh] == false) helper(neigh, adj, visited,ans);
        }
    }
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int n = adj.size();
        vector<int> ans;
        vector<bool> visited(n,false);
        helper(0 ,adj, visited, ans);
        return ans;
    }
};