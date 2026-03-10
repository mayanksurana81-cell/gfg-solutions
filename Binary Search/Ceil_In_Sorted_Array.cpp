// User function Template for C++
/*
Category: Binary Search (Primary), Array (Secondary)

Approach:
Use binary search to find the smallest element greater than or equal to x.
If arr[mid] < x move right, otherwise move left to find a smaller valid index.
If the index reaches n, no ceil exists.

Time Complexity: O(log n)
Space Complexity: O(1)
*/
class Solution {
  public:
    int findCeil(vector<int>& arr, int x) {
        // code here
        int n = arr.size();
        int i = 0 , j = n-1;
        while(i<=j){
            int mid = i + (j-i)/2;
            if(arr[mid] < x) i = mid+1;
            else j = mid-1;
        }
        if(i == n) return -1;
        return i;
    }
};