/*
Category: Sliding Window
Approach:
Maintain a fixed-size window of size k and compute sum efficiently by adding next element and removing previous.
Track maximum sum encountered while sliding the window.
Time Complexity: O(n)
Space Complexity: O(1)
Where only constant extra space is used
*/
class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        int sum = 0
        for(int i = 0 ; i< k ; i++){
            sum += arr[i];
        }
        int best = sum;
        for(int i = k ; i<n ; i++){
            sum += arr[i];
            sum = sum - arr[i-k];
            best = max(best , sum);
        }
        return best;
    }
};