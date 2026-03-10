class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    vector<int> frequencyCount(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> ans(n,0);
        unordered_map<int ,int> mp;
        for(auto x : arr){
            mp[x]++;
        }
        for(auto x : mp) ans[x.first-1] = x.second;
        return ans;
    }
};