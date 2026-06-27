 /*
Category: Arrays, Sliding Window

Approach:
- Traverse the array while maintaining a contiguous segment of non-negative elements.
- Keep track of the current segment's sum and its starting index.
- When a negative element is encountered:
  - Reset the current sum.
  - Start a new segment after the negative element.
- For every non-negative segment:
  - Update the answer if its sum is greater than the maximum sum found so far.
  - If sums are equal, prefer the longer segment.
- Store the boundaries of the best segment and construct the result at the end.

Time Complexity: O(n)
Space Complexity: O(1)
 */
// User function template for C++
class Solution {
  public:
    vector<int> findSubarray(vector<int>& nums) {
        // code here
        int n = nums.size();
        long long sum = 0;
        long long maxsum = -1;
        int i = 0 , j = 0;
        int maxL = -1, maxR = -1;
        vector<int> ans;
        while(j<n){
            if(nums[j] >= 0){
                sum += nums[j];
                if(sum == maxsum && j - i  > maxR - maxL ){
                    maxL = i;
                    maxR = j;
                }
                else if(sum > maxsum){
                    maxsum = sum;
                    maxL = i;
                    maxR = j;
                }
            }
            else{
                i = j+1;
                sum = 0;
            }
            j++;
            
        }
        if(maxL == -1) ans.push_back(-1);
        else{
            for(int i = maxL; i<= maxR ; i++){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};
