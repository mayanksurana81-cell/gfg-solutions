 /*
Category: Bit Manipulation

Approach:
- To get the i-th bit:
  - Right shift the number by (i-1) positions.
  - Extract the least significant bit using '& 1'.
- To set the i-th bit:
  - Perform bitwise OR with a mask having only the i-th bit set.
- To clear the i-th bit:
  - Create a mask with all bits set except the i-th bit.
  - Perform bitwise AND with the number to unset that bit.
- Output the get, set, and clear results in the required order.

Time Complexity: O(1)
Space Complexity: O(1)
 */
class Solution {
  public:
    void bitManipulation(int num, int i) {
        // your code here
        int getBit = (num >> (i - 1)) & 1;
        int setBit = (num | (1 << (i-1)));
        int clearBit = num & ~(1 << (i-1)); 
        cout<<getBit<<" "<<setBit<<" "<<clearBit;
    }
};