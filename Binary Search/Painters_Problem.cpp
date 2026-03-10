/*
Category: Binary Search (Primary), Greedy (Secondary)

Approach:
Use binary search on the answer (minimum time required).
The range is from the maximum board length to the total sum of board lengths.
For each mid value, check if boards can be assigned to at most k painters
without any painter exceeding mid time.

Time Complexity: O(n log(sum))
Space Complexity: O(1)
*/
class Solution {
  public:
  bool verify(vector<int>& arr, int checksum,int k){
      int subarr_cnt = 1;
      int sum = 0;
      for(int i = 0 ; i< arr.size() ; i++){
          if(sum + arr[i] <= checksum) sum += arr[i];
          else{
              subarr_cnt++;
              if(subarr_cnt >k) return false;
              sum = arr[i];
          }
      }
      return true;
  }
    int minTime(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        int maxele = *max_element(arr.begin() , arr.end());
        int maxsum = 0;
        for(int ele : arr) maxsum += ele;
        int i = maxele , j = maxsum;
        while(i<=j){
            int mid = i + (j-i)/2;
            bool check = verify(arr , mid , k);
            if(check) j = mid - 1;
            else i = mid + 1;
        }
        return i;
    }
};