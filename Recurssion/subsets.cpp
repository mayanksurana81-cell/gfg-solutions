/*
Category: Recursion / Backtracking
Approach:
Generate all subsets by recursively choosing to include or exclude each element.
Each recursive path builds a subset and adds it when all elements are processed.
Time Complexity: O(2^n)
Space Complexity: O(n)
Where recursion depth is n and output stores all subsets
*/
class Solution {
  public:
  void helper(vector<vector<int>> &ans , vector<int> v ,vector<int>& arr , int i){
      if(i == arr.size()){
          ans.push_back(v);
          return;
      }
      v.push_back(arr[i]);
      helper(ans , v , arr, i+1);
      v.pop_back();
      helper(ans , v , arr , i+1);
  }
    vector<vector<int>> subsets(vector<int>& arr) {
        // code here
        vector<vector<int>> ans;
        vector<int> v;
        helper(ans ,v , arr , 0);
        return ans;
    }
};