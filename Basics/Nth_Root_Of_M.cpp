/*
Category: Math (Primary), Brute Force (Secondary)

Approach:
Try every integer i starting from 1 and compute i^n.
If i^n equals m, return i as the nth root.
If i^n exceeds m, it means no integer nth root exists, so return -1.

Time Complexity: O(m^(1/n) * n)
Space Complexity: O(1)
*/
class Solution {
  public:
    int nthRoot(int n, int m) {
        // Code here
        if(m == 0 || n == 0) return m;
        for(int i = 1 ; ; i++){
            long long val = 1;
            for(int j = 0 ; j< n ;j++){
                val *= i;
                if(val > m) return -1;
            }
            if(val == m) return i;
        }
        return -1;
        
    }
};