/*
Category: Recursion

Approach:
Print "GFG" and recursively call the function with N-1 until N < 1 (base case).

Time Complexity: O(N)
Space Complexity: O(N)  // recursion stack
*/
class Solution {
  public:
    void printGfg(int N) {
        // Code here
        if(N<1) return;
        cout<<"GFG ";
        printGfg(N-1);
    }
};