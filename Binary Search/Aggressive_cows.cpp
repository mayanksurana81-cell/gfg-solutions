/*
Category: Binary Search (Primary), Greedy (Secondary)

Approach:
Sort the stall positions and apply binary search on the minimum distance between cows.
For a given distance, greedily place cows in stalls while maintaining at least that distance.
If all cows can be placed, try a larger distance; otherwise reduce the distance.

Time Complexity: O(n log d)
Space Complexity: O(1)
Where d = max(stalls) - min(stalls).
*/
class Solution {
  public:
  bool check(vector<int> &stalls, int cows , int d){
      int cnt = 1;
      int lastpos = stalls[0];
      for(int i = 1 ; i<stalls.size() ; i++){
          if(stalls[i] - lastpos >= d){
              cnt++;
              lastpos = stalls[i];
          }
          if(cnt == cows) return true;
      }
      return false;
  }
    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
        sort(stalls.begin() , stalls.end());
        int n = stalls.size();
        int maxdist = stalls[n-1] - stalls[0];
        int low = 1 , high = maxdist;
        while(low<=high){
            int mid = low + (high-low)/2;
            bool see = check(stalls , k , mid);
            if(!see) high = mid - 1;
            else low = mid + 1;
        }
        return high;
    }
};