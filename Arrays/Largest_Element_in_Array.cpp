// GFG - Largest Element in Array
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int max = INT16_MIN;
        for(int i = 0 ; i< arr.size() ; i++){
            if(arr[i] > max) max = arr[i];
        }
        return max;
    }
};