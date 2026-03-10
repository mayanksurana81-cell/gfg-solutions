/*
Category: Hashing (Primary), Array / Prefix Sum (Secondary)

Approach:
Use prefix sum with a hash map.  
Store the first occurrence of each prefix sum.  
If (current_sum - k) exists in the map, a subarray with sum k is found.  
Update the maximum length accordingly.

Time Complexity: O(n)
Space Complexity: O(n)
*/
class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        unordered_map<int,int> mp;
        int max_len = 0;
        int sum = 0;
        for(int i = 0 ; i< arr.size() ; i++){
            sum += arr[i];
            
            if(sum==k) max_len = i+1;
            
            if(mp.find(sum-k)!=mp.end()){
                int len = i - mp[sum-k];
                max_len = max(max_len , len);
            }
            
            if(mp.find(sum)==mp.end())mp[sum] = i;
        }
        return max_len;
    }
};