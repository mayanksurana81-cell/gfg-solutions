 /*
Category: Recursion, Divide and Conquer, DP Pattern

Approach:
- For every number n, there are two possible choices:
  1. Keep the number as it is.
  2. Split it into:
     n/2 + n/3 + n/4
     and recursively compute the maximum obtainable sum from each part.
- The solution recursively evaluates the split value and compares it with the original number.
- If splitting produces a larger value, it is chosen; otherwise the original number is returned.
- Base case:
  When n becomes 0, return 0 since no further value can be generated.

Time Complexity: Exponential (without memoization)
Space Complexity: O(log n)

Extra Clarification:
- The logic is fully correct recursively.
- Memoization can further optimize repeated subproblem computations.
 */
class Solution {
  public:
    int maxSum(int n) {
        // code here.
        if(n == 0) return 0;
        int split = maxSum(n/2)+maxSum(n/3)+maxSum(n/4);
        return max(n , split);
    }
};