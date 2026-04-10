/*
Category: Recursion / Backtracking
Approach:
Generate all binary strings of length n by recursively appending '0' and '1' at each step.
Base case when length becomes 0, push the constructed string into result.
Time Complexity: O(2^n)
Space Complexity: O(n)
Where recursion depth is n and output stores 2^n strings
*/
class Solution {
  public:
  void helper(vector<string> &ans , string s , int n){
    if(n == 0){
        ans.push_back(s);
        return;
    }  
    helper(ans , s + '0' , n-1);
    helper(ans , s + '1' , n-1);
  }
    vector<string> binstr(int n) {
        // code here
        vector<string> ans;
        helper(ans , "" , n);
        return ans;
    }
};