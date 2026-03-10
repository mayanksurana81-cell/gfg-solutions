/*
Category: Heap / Priority Queue (Primary), Greedy (Secondary)

Approach:
Use a min-heap to always combine the two smallest elements.
Remove the two smallest numbers, add their sum to the total cost,
and push the sum back into the heap. Repeat until one element remains.

Time Complexity: O(n log n)
Space Complexity: O(n)
*/
class Solution {
  public:
    int minCost(vector<int>& arr) {
        // code here
        priority_queue<int , vector<int> , greater<int>>pq;
        for(int ele : arr){
            pq.push(ele);
        }
        int FinalCost = 0;
        
        while(pq.size()!=1){
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            int cost = a+b;
            FinalCost += cost;
            pq.push(cost);
        }
        return FinalCost;
    }
};