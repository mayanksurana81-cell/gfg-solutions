 /*
Category: Arrays, Two Pointers

Approach:
- The array is rotated left by d positions using the reversal algorithm.
- First reverse the part from index d to n-1.
- Then reverse the first d elements.
- Finally reverse the entire array.
- The combined reversals place every element into its correct rotated position
  without using extra space.
Time Complexity: O(n)
Space Complexity: O(1)
 */
class Solution {
  public:
    void rotateArr(vector<int>& nums, int d) {
        // code here
        int n = nums.size();
        d = d % n;
        reverse(nums.begin() + d , nums.end());
        reverse(nums.begin() , nums.begin() + d);
        reverse(nums.begin() , nums.end());
    }
};
