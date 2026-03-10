/*
Category: Math (Primary), Number Theory (Secondary)

Approach:
Iterate from 1 to √n. If i divides n, add both i and n/i as divisors.
Store them in a vector, sort the vector, and print all divisors.

Time Complexity: O(√n + k log k)  // k = number of divisors
Space Complexity: O(k)
*/
class Solution {
  public:
    void print_divisors(int n) {
        // Code here.
        vector<int> ans;
        int x = sqrt(n);
        for(int i = 1 ; i<=x ; i++){
            if(n%i==0){
                ans.push_back(i);
                int a = n/i;
                if(i!=a) ans.push_back(a);
            }
        }
        sort(ans.begin(),ans.end());
        for(int i = 0; i<ans.size() ; i++){
            cout<<ans[i]<<" ";
        }
    }
};