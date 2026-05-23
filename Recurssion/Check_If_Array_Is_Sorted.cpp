 /*
Category: Recursion, Arrays

Approach:
- The array is checked recursively from left to right.
- At each index:
  - Compare the current element with the previous element.
  - If the current element is smaller, the array is not sorted.
- If all adjacent pairs satisfy the sorted condition, recursion reaches
  the end and returns true.

Time Complexity: O(n)
Space Complexity: O(n)
 */
class Solution {
  public:
  bool helper(vector<int>& arr, int i){
      if(i == arr.size()) return true;
      if(arr[i] < arr[i-1]) return false;
      helper(arr , i+1);
  }
    bool isSorted(vector<int>& arr) {
        // code here
        if(arr.size() == 1) return true;
        return helper(arr , 1);
    }
};