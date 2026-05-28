 /*
Category: Heap, Priority Queue

Approach:
- Since every element is at most k positions away from its correct position,
  maintain a min heap of size k+1.
- Insert the first k+1 elements into the heap.
- Then:
  - Extract the minimum element and place it into the array.
  - Insert the next array element into the heap.
- After traversal, remove all remaining heap elements and place them back.
- The min heap ensures the next smallest valid element is always available.

Time Complexity: O(n log k)
Space Complexity: O(k)
 */
class Solution {
  public:
    void nearlySorted(vector<int>& arr, int k) {
        // code here
        priority_queue<int , vector<int> , greater<int> >pq;
        int n = arr.size();
        for(int i = 0 ; i<=k && i<n ; i++){
            pq.push(arr[i]);
        }
        int idx = 0;
        for(int i = k+1 ; i<arr.size() ; i++){
            arr[idx++] = pq.top();
            pq.pop();
            pq.push(arr[i]);
        }
        while(!pq.empty()){
            arr[idx++] = pq.top();
            pq.pop();
        }
        
    }
};