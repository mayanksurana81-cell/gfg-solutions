/*
Category: Linked List (Primary)

Approach:
Create a new node with given value and point its next
to the current head. Update head to this new node,
effectively inserting at the front.

Time Complexity: O(1)
Space Complexity: O(1)
*/
/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node *insertAtFront(Node *head, int x) {
        // Code here
        Node* temp = new Node(x);
            temp -> next = head;
            head = temp;
        return head;
    }
};