 /*
Category: Arrays, Moore Voting Algorithm

Approach:
- Use Moore's Voting Algorithm to find a potential majority element.
- Traverse the array while maintaining:
  - ele  -> current candidate
  - freq -> vote count
- If freq becomes zero, select the current element as the new candidate.
- Increase the count when the same element appears and decrease it otherwise.
- After obtaining a candidate, perform a second traversal to count its occurrences.
- Return the candidate only if it appears more than n/2 times; otherwise return -1.

Time Complexity: O(n)
Space Complexity: O(1)
 */
class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        int ele;
        int freq = 0;
        int n = arr.size();
        for(int i = 0 ; i<arr.size() ; i++){
            if(freq == 0){
                freq++;
                ele = arr[i];
            }
            else if(ele == arr[i]) freq++;
            else freq--;
        }
        int count = 0;
        for(int i : arr){
            if(i == ele) count++;
        }
        return (count > n/2) ? ele : -1;
    }
};