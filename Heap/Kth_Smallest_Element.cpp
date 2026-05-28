 /*
Category: Heap, Priority Queue

Approach:
- Maintain a max heap of size k.
- Traverse the array and insert every element into the heap.
- If the heap size becomes greater than k:
  - Remove the largest element from the heap.
- This ensures the heap always contains the k smallest elements seen so far.
- After processing the entire array, the heap top represents the kth smallest element.

Time Complexity: O(n log k)
Space Complexity: O(k)
 */
class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        priority_queue<int> max_heap;
        for(int i = 0 ; i<arr.size() ; i++){
            max_heap.push(arr[i]);
            
            if(max_heap.size() > k){
                max_heap.pop();
            }
        }
        return max_heap.top();
    }
};