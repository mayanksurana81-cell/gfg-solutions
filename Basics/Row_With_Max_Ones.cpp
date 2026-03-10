// User function template for C++
/*
Category: Matrix (Primary), Two Pointers / Greedy (Secondary)

Approach:
Start from the top-right corner of the matrix.
If the element is 1, move left and update the answer row.
If the element is 0, move down to the next row.
This efficiently finds the row with the maximum number of 1s.

Time Complexity: O(m + n)
Space Complexity: O(1)
*/
class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int m = arr.size();
        if(m==0) return -1;
        int n = (m>0)? arr[0].size() :0;
        int i = 0 , j = n-1;
        int ans = -1;
        while(i <m && j>=0){
            if(arr[i][j] == 1){
                ans = i;
                j--;
            }
            else i++;
        }
        return ans;
    }
};