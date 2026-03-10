/*
Category: Binary Search (Primary), Greedy (Secondary)

Approach:
Use binary search on the answer (maximum pages a student can read).
The range is from the maximum single book pages to the total pages.
For each mid value, check how many students are required if no student reads more than mid pages.
If students required > k, increase the limit; otherwise decrease it.

Time Complexity: O(n log(sum))
Space Complexity: O(1)
*/
class Solution {
  public:
  int check(vector<int> &arr, int pages){
      int sdt = 1;
      int sum = 0;
      for(int i = 0 ; i<arr.size() ; i++){
          if(sum + arr[i] <= pages){
              sum += arr[i];
          }
          else {
              sdt++;
              sum = arr[i];
          }
      }
      return sdt;
  }
    int findPages(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        if(n<k) return -1;
        int maxpage = *max_element(arr.begin() , arr.end());
        int sumOfPages = 0;
        for(int ele : arr){
            sumOfPages += ele;
        }
        int i = maxpage , j = sumOfPages;
        while(i<=j){
            int mid = i + (j-i)/2;
            int sdt = check(arr , mid);
            if(sdt > k) i = mid +1;
            else j = mid -1;
        }
        return i;
    }
};