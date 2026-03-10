/*
Category: Binary Search (Primary), Array (Secondary)

Approach:
Use binary search to find the first index where the element is strictly greater than the target.
If arr[mid] <= target, move right; otherwise move left.

Time Complexity: O(log n)
Space Complexity: O(1)
*/
class Solution {
  public:
    int upperBound(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        int i = 0 , j = n-1;
        while(i<=j){
            int mid = i + (j-i)/2;
            if(arr[mid] <= target) i = mid+1;
            else j = mid-1;
        }
         return i;
    }
};