 /*
Category: Arrays, Sorting

Approach:
- Sort the array in increasing order.
- After sorting:
  - The K1-th and K2-th smallest elements are positioned at indices
    K1-1 and K2-1 respectively.
- Traverse the elements strictly between these two positions
  and accumulate their sum.
- Return the final computed sum.

Time Complexity: O(n log n)
Space Complexity: O(1)
 */
class Solution {
  public:
    long long sumBetweenTwoKth(long long A[], long long N, long long K1, long long K2) {
        // Your code goes here
        sort(A, A+N);
        long long sum = 0;
        for(long long i = K1 ; i<K2-1 ; i++){
            sum += A[i];
        }
        return sum;
        
    }
};