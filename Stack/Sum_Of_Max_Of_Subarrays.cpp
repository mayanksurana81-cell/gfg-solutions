/*
Category: Stack, Monotonic Stack, Array

Approach:
- Find the previous greater element index and next greater element index for every array element using two monotonic stacks.
- Use different comparison operators while constructing the stacks to handle duplicate values correctly and ensure each subarray contributes only once.
- For each element, calculate the number of subarrays in which it is the maximum as (distance to previous greater) × (distance to next greater).
- Multiply this count by the element's value and add its contribution to the final sum.

Time Complexity: O(n)
Space Complexity: O(n)
*/
class Solution {
  public:
    int sumOfMax(vector<int> &arr) {
        // code here
        int n = arr.size();
        vector<int> pge(n); // store idx
        vector<int> nge(n);//store idx
        stack<int> st;
        for(int i = 0; i < n; i++){
            while(!st.empty() && arr[st.top()] <= arr[i]) st.pop();
            pge[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        st = stack<int>();
        for(int i = n - 1; i >= 0; i--){
            while(!st.empty() && arr[st.top()] < arr[i]) st.pop();
            nge[i] = st.empty() ? n : st.top();
            st.push(i);
        }    
        int ans = 0;
        for(int i = 0; i < n; i++){
            long long left = i - pge[i];
            long long right = nge[i] - i;
            ans = (ans + (left * right * 1LL * arr[i]));
        }
        return ans;
    }
};