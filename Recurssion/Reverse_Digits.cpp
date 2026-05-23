 /*
Category: Recursion, Mathematics

Approach:
- The number is processed digit by digit using recursion.
- At each step:
  - Extract the last digit using n % 10.
  - Append it to the answer by multiplying the current answer by 10
    and adding the extracted digit.
- Recursively continue with n / 10 until the number becomes 0.
- This builds the reversed number in correct order.

Time Complexity: O(d)
Space Complexity: O(d)

Where d is the number of digits in the number.
 */
class Solution {
  public:
  void reverse(int n , int &ans){
      if(n == 0) return;
      ans = ans*10 + n%10;
      reverse(n/10 , ans);
  }
    int reverseDigits(int n) {
        // Code here
        int ans = 0;
        reverse(n ,ans);
        return ans;
    }
};