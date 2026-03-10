class Solution {
  public:
  void solve(vector<int> &arr , int start , int end){
          if(start>end) return;
          swap(arr[start],arr[end]);
          solve(arr,start+1 , end-1);
      
  }
    void reverseArray(vector<int> &arr) {
        // code here
        solve(arr,0,arr.size()-1);
    }
};