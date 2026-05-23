 /*
Category: Recursion, Arrays

Approach:
- The array is checked recursively from left to right.
- At each index:
  - Compare the current element with the previous element.
  - If the current element is smaller, the array is not sorted.
- If all adjacent pairs satisfy the sorted condition, recursion reaches
  the end and returns true.

Time Complexity: O(n)
Space Complexity: O(n)
 */
class Solution {
  public:
  bool check(string &s , int i , int j){
      if(i>=j) return true;
      if(s[i] != s[j]) return false;
      return check(s , i+1 , j-1);
  }
    bool isPalinArray(vector<int> &arr) {
        // code here
        int n = arr.size();
        for(int i = 0 ; i<n ; i++){
            string s = to_string(arr[i]);
            bool flag = check(s , 0 , s.length()-1);
            if(flag == false) return false;
        }
        return true;
    }
};