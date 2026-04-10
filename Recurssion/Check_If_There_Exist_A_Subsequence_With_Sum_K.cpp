/*
Category: Recursion / Backtracking
Approach:
Try all subsequences by either including or excluding each element to check if any subset sums to k.
Uses recursive exploration with early stopping when sum becomes 0 or invalid.
Time Complexity: O(2^n)
Space Complexity: O(n)
Where recursion depth is n
*/
class Solution {
  public:
  bool checksum(vector<int>& arr , int k , int i){
      if(k == 0) return true;
      if(i == arr.size() || k < 0) return false;
     return checksum(arr , k-arr[i] , i+1) || checksum(arr , k , i+1);
  }
    bool checkSubsequenceSum(int n, vector<int>& arr, int k) {
        // Code here
        return checksum(arr , k , 0);
    }
};