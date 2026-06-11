 /*
Category: Graph, Breadth First Search

Approach:
- Start BFS traversal from vertex 0.
- Use a queue to process vertices level by level.
- Mark a vertex as visited when it is pushed into the queue.
- Repeatedly:
  - Remove the front vertex from the queue.
  - Add it to the traversal result.
  - Push all its unvisited adjacent vertices into the queue.
- Continue until the queue becomes empty, producing the BFS traversal order.

Time Complexity: O(V + E)
Space Complexity: O(V)
 */
class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        int n = adj.size();
        vector<int> ans;
        queue<int> q;
        vector<bool> vis(n,false);
        q.push(0);
        vis[0] = true;
        while(!q.empty()){
            int u = q.front();
            q.pop();
            ans.push_back(u);
            for(int neigh : adj[u]){
                if(vis[neigh] == false) q.push(neigh), vis[neigh] = true;
            }
        }
        return ans;
    }
};