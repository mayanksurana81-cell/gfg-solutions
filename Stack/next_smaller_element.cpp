/*
Category: Stack, Monotonic Stack, Array

Approach:
- Traverse the array from right to left while maintaining a monotonic increasing stack.
- Remove all elements from the stack that are greater than or equal to the current element, as they cannot be the next smaller element.
- If the stack is not empty, its top is the next smaller element; otherwise, the answer is -1.
- Push the current element onto the stack for subsequent comparisons.

Time Complexity: O(n)
Space Complexity: O(n)
*/
class Solution {
  public:
    vector<int> nextSmallerEle(vector<int>& arr) {
        //  code here
        int n = arr.size();
        vector<int> ans(n);
        stack<int> st;
        for(int i = n - 1; i >= 0; i--){
            while(!st.empty() && st.top() >= arr[i]) st.pop();
            ans[i] = st.empty() ? -1 : st.top();
            st.push(arr[i]);
        }
        return ans;
    }
};
