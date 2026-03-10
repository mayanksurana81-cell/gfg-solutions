/*
Category: Array (Primary)

Approach:
Traverse the array once while maintaining two variables: largest and second largest.
If a number is greater than the current largest, update both largest and second largest.
If it lies between largest and second largest, update the second largest.

Time Complexity: O(n)
Space Complexity: O(1)
*/
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int max1  = INT16_MIN;
        int max2  = INT16_MIN;
        
        for(int x : arr){
            if(x>max1){
                max2 = max1;
                max1 = x;
            }
            else if(x<max1 && x>max2){
                max2 = x;
            }
        }
        return max2;
    }
};