 /*
Category: Stack, Monotonic Stack

Approach:
- Traverse the array from right to left.
- Maintain a decreasing stack that stores potential next greater elements.
- For each element:
  - Remove all elements from the stack that are smaller than or equal to it,
    since they cannot be the next greater element.
  - If the stack is non-empty, its top is the next greater element.
  - Otherwise, no greater element exists to the right, so store -1.
- Push the current element onto the stack for future comparisons.

Time Complexity: O(n)
Space Complexity: O(n)
 */
class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        // code here
        int n = arr.size();
        stack<int> st;
        vector<int> ans(n,-1);
        for(int i = n-1 ; i>= 0 ; i--){
            while(!st.empty() && st.top() <= arr[i]) st.pop();
            ans[i] = st.empty() ? -1 : st.top();
            st.push(arr[i]);
        }
        return ans;
        
    }
};