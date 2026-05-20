 /*
Category: Arrays, Single Pass Traversal

Approach:
- Maintain two variables:
  - first  -> largest element found so far
  - second -> second largest distinct element
- Traverse the array once:
  - If the current element is greater than first:
    - Update second with previous first
    - Update first with current element
  - Otherwise, if the element lies strictly between first and second,
    update second.
- Strict comparison with first ensures duplicate maximum elements
  are not considered as second largest.

Time Complexity: O(n)
Space Complexity: O(1)
 */
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int second = INT_MIN;
        int first = INT_MIN;
        for(int ele : arr){
            if(ele > first) {
                second = first;
                first = ele;
            }
            else if(ele > second && first > ele) second = ele;
        }
        return (second == INT_MIN) ? -1 : second;
    }
};