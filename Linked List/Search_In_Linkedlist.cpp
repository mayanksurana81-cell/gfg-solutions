/*
Category: Linked List (Primary)

Approach:
Traverse the linked list and check each node’s value.
If any node matches the given key, return true;
otherwise continue until end and return false.

Time Complexity: O(n)
Space Complexity: O(1)

Where n = number of nodes.
*/
/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
}; */

class Solution {
  public:
    bool searchKey(Node* head, int key) {
        // Code here
        Node* temp = head;
        while(temp != NULL){
            if(temp->data == key) return true;
            temp = temp->next;
        }
        return false;
    }
};
