 /*
Category: Dynamic Programming

Approach:
- At each element, decide whether to:
  - Skip it and keep the maximum sum obtained so far.
  - Take it and add its value to the maximum sum excluding the previous element.
- Maintain:
  - p1 = maximum sum up to the previous index.
  - p2 = maximum sum up to the index before the previous one.
- Compute the best choice for every element and update these variables.
- The final value of p1 represents the maximum sum possible without selecting adjacent elements.

Time Complexity: O(n)
Space Complexity: O(1)
 */
class Solution {
  public:
    // calculate the maximum sum with out adjacent
    int findMaxSum(vector<int>& nums, int n) {
        // code here
        int p1 = 0,p2 = 0;
        for(int i = 0; i <n; i++){
            int curr = max(p1, p2 + nums[i]);
            
            p2 = p1;
            p1 = curr;
        }
    return p1;
    }
};