/*
Category: Recursion / Stack
Approach:
Use recursion to remove the top element and reverse the remaining stack. 
Insert each removed element at the bottom using a helper function to achieve full reversal.
Time Complexity: O(n^2)
Space Complexity: O(n)
Where n is the number of elements in the stack (due to recursive calls)
*/
class Solution {
  public:
  void insert(stack<int> &st , int x){
      if(st.empty()){
          st.push(x);
          return;
      }
      int temp = st.top();
      st.pop();
      insert(st,x);
      st.push(temp);
  }
    void reverseStack(stack<int> &st) {
        // code here
        if(st.size() <= 1) return;
        int temp = st.top();
        st.pop();
        reverseStack(st);
        insert(st,temp);
    }
};