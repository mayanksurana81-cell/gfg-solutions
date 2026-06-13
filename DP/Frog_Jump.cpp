 /*
Category: Dynamic Programming

Approach:
- Let cost[i] represent the minimum energy required to reach the i-th stone.
- The frog can reach stone i either:
  - From stone i-1 with cost:
    cost[i-1] + abs(height[i] - height[i-1])
  - From stone i-2 with cost:
    cost[i-2] + abs(height[i] - height[i-2])
- Compute the minimum of these two choices for every stone.
- The answer is the minimum cost required to reach the last stone.

Time Complexity: O(n)
Space Complexity: O(n)
 */
class Solution {
  public:
    int minCost(vector<int>& height) {
        // Code here
        int n = height.size();
        vector<int>cost(n,0);
        cost[0] = 0;
        cost[1] = abs(height[1] - height[0]);
        for(int i = 2; i < height.size() ; i++){
            int c1 = cost[i-1] + abs(height[i] - height[i - 1]);
            int c2 = cost[i - 2] + abs(height[i] - height[i - 2]);
            cost[i] = min(c1,c2);
        }
        return cost[n-1];
    }
};