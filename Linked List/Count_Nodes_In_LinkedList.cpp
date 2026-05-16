/*
Category: Linked List (Primary)

Approach:
Traverse the linked list from head to NULL and count
each node encountered. Return the total count.

Time Complexity: O(n)
Space Complexity: O(1)

Where n = number of nodes.
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
    int getCount(Node* head) {
        // Code here
        int count = 0;
        Node* temp = head;
        while(temp != NULL){
            count++;
            temp = temp->next;
        }
        return count;
    }
};
