//GFG square root problem
//Time complexity O(log n)
//Space complexity O(1)
//learned integer overflow from this problem also
class Solution {
  public:
    int floorSqrt(int n) {
        // code here
        if(n == 0) return 0;
        if(n==1) return 1;
        int i = 1 , j = n/2;
        while(i <= j){
            int mid = i+(j-i)/2;
            long long sq = 1LL*mid*mid;
            if(sq == n) return mid;
            else if(sq > n) j = mid-1;
            else i = mid+1;
        }
        return j;
    }
};