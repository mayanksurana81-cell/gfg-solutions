/*
Category: Binary Search (Primary), Array (Secondary)

Approach:
Use binary search to find the first index where the element is greater than or equal to the target.
If arr[mid] >= target, move left to check for an earlier occurrence; otherwise move right.

Time Complexity: O(log n)
Space Complexity: O(1)
*/
class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        int i = 0 , j = n-1;
        int mid = 0;
        while(i<=j){
            mid = i + (j-i)/2;
            if(arr[mid] >= target) j = mid-1;
            else i = mid+1;
        }
        return i;
    }
};
