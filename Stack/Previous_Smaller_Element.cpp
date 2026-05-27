 /*
Category: Stack, Monotonic Stack

Approach:
- Maintain a monotonic increasing stack to track previous smaller elements.
- For every element:
  - Remove all elements from the stack that are greater than or equal
    to the current element since they cannot act as previous smaller values.
  - If the stack becomes empty, no previous smaller element exists,
    so push -1 into the answer.
  - Otherwise, the stack top represents the nearest previous smaller element.
- Push the current element into the stack for future comparisons.

Time Complexity: O(n)
Space Complexity: O(n)
 */
class Solution {
  public:
    vector<int> prevSmaller(vector<int>& arr) {
        //  code here
        vector<int> ans;
        stack<int>st;
        for(int ele : arr){
            while(!st.empty() && st.top()>= ele) st.pop();
            if(st.empty()) ans.push_back(-1);
            else ans.push_back(st.top());
            st.push(ele);
        }
        return ans;
        
    }
};