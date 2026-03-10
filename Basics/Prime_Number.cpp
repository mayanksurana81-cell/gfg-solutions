/*
Category: Math (Primary), Number Theory (Secondary)

Approach:
Check divisibility of n from 2 to n-1.
If any number divides n, it is not prime; otherwise it is prime.

Time Complexity: O(n)
Space Complexity: O(1)
*/
class Solution {
  public:
    bool isPrime(int n) {
        // code here
        if(n<=1) return false;
        for(int i = 2 ; i<n ; i++){
            if(n%i==0) return false;
        }
        return true;
    }
};