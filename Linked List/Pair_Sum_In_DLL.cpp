/*
Category: Doubly Linked List (Primary), Two Pointers (Secondary)

Approach:
Use two pointers: one at the beginning (left) and one at the end (right).
Since the DLL is sorted, move pointers based on sum comparison:
- If sum == target → store pair and move both pointers
- If sum > target → move right backward
- If sum < target → move left forward

Time Complexity: O(n)
Space Complexity: O(1) (excluding output)

Where n = number of nodes.
*/
// User function Template for C++

/* Doubly linked list node class
class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val) : data(val), next(NULL), prev(NULL)
    {
    }
};
*/

class Solution {
  public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target) {
        // code here
        Node* left = head;
        Node* right = head;
        
        vector<pair<int, int>> ans;
        if(head == NULL) return ans;
        while(right->next != NULL) right = right->next;
        
        while(left != right && left->prev != right){
            int sum = left->data + right->data;
            if(sum == target){
                 ans.push_back({left->data , right->data});
                 left = left->next;
                 right = right->prev;
            }
            else if(sum > target) right = right->prev;
            else left = left->next;
        }
        return ans;
    }
};