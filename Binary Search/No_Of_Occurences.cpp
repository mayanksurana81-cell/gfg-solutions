/*
Category: Binary Search (Primary), Array (Secondary)

Approach:
Use binary search twice:
1. First to find the first occurrence (lower bound) of the target.
2. Second to find the last occurrence (upper bound - 1).
The frequency is calculated as (end - start + 1).

Time Complexity: O(log n)
Space Complexity: O(1)
*/
class Solution {
  public:
    int countFreq(vector<int>& nums, int target) {
        // code here
        int n = nums.size();
        int i = 0 , j = n-1;
        while(i<=j){
            int mid = i + (j-i)/2;
            if(nums[mid] < target) i = mid+1;
            else j = mid - 1;
        }
        int start = i;
        i = 0 , j = n-1;
        while(i<=j){
            int mid = i + (j-i)/2;
            if(nums[mid] <= target) i = mid+1;
            else j = mid - 1;
        }
        int end = j;
        if(start>end) return 0;
        return (end-start)+1;
    }
};