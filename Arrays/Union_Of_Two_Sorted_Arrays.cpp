/*
Category: Array (Primary), Two Pointers (Secondary)

Approach:
Use two pointers to traverse both sorted arrays simultaneously.
Compare elements and insert the smaller one into the result while avoiding duplicates.
If both elements are equal, insert once and move both pointers.
Finally process remaining elements of either array.

Time Complexity: O(m + n)
Space Complexity: O(m + n)
*/
class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        vector<int> ans;
        int m = a.size() , n = b.size();
        int i = 0, j= 0;
        
        while(i<m && j<n){
            if(a[i]<b[j]){
                if(ans.empty() || ans.back()!=a[i]) ans.push_back(a[i]);
                 i++;
            }
            else if(a[i]>b[j]){
                if(ans.empty() || ans.back()!=b[j]) ans.push_back(b[j]);
                j++;
            }
            else{
                if(ans.empty()|| ans.back() != a[i])ans .push_back(a[i]);
                i++;
                j++;
            }
        }
        while(i<m){
            if(ans.empty()|| ans.back()!=a[i]) ans.push_back(a[i]);
            i++;
        }
        while(j<n){
            if(ans.empty()|| ans.back()!=b[j]) ans.push_back(b[j]);
            j++;
        }
        return ans;
    }
};