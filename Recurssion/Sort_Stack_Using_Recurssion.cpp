/*
Category: Recursion / Stack
Approach:
Use recursion to remove elements one by one and sort the remaining stack. 
Insert each removed element back into its correct position using a helper function that maintains sorted order.
Time Complexity: O(n^2)
Space Complexity: O(n)
Where n is the number of elements in the stack (due to recursive calls)
*/
class Solution {
  public:
  void insert(stack<int> &st , int x){
    if(st.empty() || st.top()<= x){
        st.push(x);
        return;
    }
    int temp = st.top();
    st.pop();
    insert(st , x);
    st.push(temp);
  }
    void sortStack(stack<int> &st) {
        // code here
        if(st.empty()) return;
        int temp = st.top();
        st.pop();
        sortStack(st);
        insert(st , temp);
    }
};
