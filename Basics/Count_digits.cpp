/*
Category: Math (Primary), Number Manipulation (Secondary)

Approach:
Extract each digit of the number using %10 and check if it divides the original number.
Ignore digit 0 to avoid division by zero.

Time Complexity: O(d)  // d = number of digits
Space Complexity: O(1)
*/
class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        // code here
        int count = 0;
        int num = n;
        while(n>=1){
            int digit = n%10;
            n/=10;
            if(digit == 0) continue;
            else if(num%digit == 0) count++;
            
        }
        return count;
    }
};