/*
Category: Doubly Linked List (Primary)

Approach:
Traverse the list to reach the p-th position (0-based).
Insert a new node by adjusting next and prev pointers.
Handle edge case separately when inserting at the end.

Time Complexity: O(n)
Space Complexity: O(1)

Where n = number of nodes.
*/
/*
class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = prev = nullptr;
    }
};
*/

class Solution {
  public:
    Node *insertAtPos(Node *head, int p, int x) {
        // code here
        //it is followinng 0th index so cnt = -1 to reach pth position
        Node* newNode = new Node(x);
        Node* temp = head;
        int cnt = -1;
        while(temp != NULL){
            cnt++;
            if(cnt == p) break;
            temp = temp->next;
        }
        if(temp -> next == NULL){
            temp -> next = newNode;
            newNode -> prev = temp;
            newNode -> next = NULL;
        }
        else{
            Node* front = temp->next;
            front->prev = newNode;
            temp->next = newNode;
            newNode->prev = temp;
            newNode->next = front;
        }
        return head;
    }
};