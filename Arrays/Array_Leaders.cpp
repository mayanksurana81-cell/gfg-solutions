/*Category: Array (Primary), Greedy (Secondary)

Approach:
Traverse the array from right to left and keep track of the maximum element seen so far.
If the current element is greater than or equal to the maximum, it is a leader.

Time Complexity: O(n)
Space Complexity: O(k)  // k = number of leaders*/

class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> ans;
        ans.push_back(arr[n-1]);
        int maxi = arr[n-1];
        if(n==1) return ans;
        for(int i = n-2 ; i>=0 ; i--) {
            if(arr[i] >= maxi) {
                ans.push_back(arr[i]);
                maxi = arr[i];   
            }
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
};