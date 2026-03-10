/*
Category: Binary Search (Primary), Array (Secondary)

Approach:
The number of rotations in a sorted rotated array equals the index of the minimum element.
Use binary search to determine which half is sorted and track the minimum element index.

Time Complexity: O(log n)
Space Complexity: O(1)
*/
class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int n = arr.size();
        int i = 0 , j = n-1;
        int Min = INT_MAX;
        int idx = -1;
        if(arr[i]<=arr[j]) return 0;
        while(i<=j){
            int mid = i + (j-i)/2;
            if(arr[i] <= arr[mid]){
                //left sorted
                Min = min(Min,arr[i]);
                if(arr[i] == Min) idx = i;
                i = mid+1;
            }
            else{
                //right sorted
                Min = min(Min,arr[mid]);
                if(arr[mid] == Min) idx = mid;
                j = mid-1;
                
            }
        }
        return idx;
    }
};