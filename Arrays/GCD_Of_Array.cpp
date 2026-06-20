// GFG GCD od array
//Time complexity :- O(nlogM) M = max element value , n = no. of elements
// Space complexity :- O(logM)
class Solution {
public:
    int gcd(int a, int b) {
        // Euclidean algorithm for 2 numbers
        if(b == 0) return a;
        return gcd(b, a % b);
    }

    int gcd(int n, vector<int> arr) {
        int ans = arr[0]; // start with the first element
        for(int i = 1; i < n; i++) {
            ans = gcd(ans, arr[i]); // GCD of current answer and next element
        }
        return ans;
    }
};
