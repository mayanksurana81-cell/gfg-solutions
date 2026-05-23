 /*
Category: Recursion, Arrays

Approach:
- A recursive helper function traverses the array one element at a time.
- During traversal:
  - Update maxi if the current element is larger.
  - Update mini if the current element is smaller.
- The recursion continues until all elements are processed.
- Final minimum and maximum values are stored in the answer vector.

Time Complexity: O(n)
Space Complexity: O(n)
 */
class Solution {
  public:
  void helper(vector<int> &arr , int n , int &mini , int &maxi){
      if(n == arr.size()) return;
      if(arr[n] > maxi) maxi = arr[n];
      if(arr[n] < mini) mini = arr[n];
      helper(arr , n+1 , mini , maxi);
  }
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        vector<int> ans;
        int n = arr.size();
        int mini = INT_MAX;
        int maxi = INT_MIN;
        helper(arr , 0 ,mini ,maxi);
        ans.push_back(mini);
        ans.push_back(maxi);
        return ans;
    }
};