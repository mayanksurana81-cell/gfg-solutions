/*
Category: Stack, Monotonic Stack, Array

Approach:
- Traverse the array from left to right while maintaining a monotonic decreasing stack.
- Remove all elements from the stack that are smaller than or equal to the current element, as they cannot be the previous greater element.
- If the stack is not empty, its top is the previous greater element; otherwise, the answer is -1.
- Push the current element onto the stack for future comparisons.

Time Complexity: O(n)
Space Complexity: O(n)
*/
class Solution {
  public:
    vector<int> preGreaterEle(vector<int>& arr) {
        //  code here
        int n = arr.size();
        vector<int> ans(n);
        stack<int> st;
        for(int i = 0; i < n; i++){
            while(!st.empty() && st.top() <= arr[i]) st.pop();
            ans[i] = st.empty() ? -1 : st.top();
            st.push(arr[i]);
        }
        return ans;
    }
};