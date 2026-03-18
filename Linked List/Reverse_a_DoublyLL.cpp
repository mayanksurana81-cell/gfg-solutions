/*
Category: Doubly Linked List (Primary)

Approach:
Traverse the list and swap next and prev pointers for each node.
After swapping, move to the previous node (original next).
Track the last processed node as the new head.

Time Complexity: O(n)
Space Complexity: O(1)

Where n = number of nodes.
*/
/*
class Node {
  public:
    int data;
    Node *next;
    Node *prev;
    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

*/
class Solution {
  public:
    Node *reverse(Node *head) {
        // code here
        Node* curr = head;
        Node* newHead = NULL;
        while(curr != NULL){
            newHead = curr;
            swap(curr->next , curr->prev);
            curr = curr->prev;
        }
        return newHead;
    }
};