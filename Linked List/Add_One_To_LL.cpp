/*
Category: Linked List (Primary)

Approach:
Reverse the list to process from least significant digit.
Add one while handling carry (9 → 0). Reverse back to restore
original order. If carry remains, add a new node at front.

Time Complexity: O(n)
Space Complexity: O(1)

Where n = number of nodes.
*/
/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
  Node* reverse(Node* head){
      Node* curr = head;
      Node* prev = NULL;
      Node* front = NULL;
      while(curr != NULL){
          front = curr->next;
          curr->next = prev;
          prev = curr;
          curr = front;
      }
      return prev;
  }
    Node* addOne(Node* head) {
        // Your Code here
        if(!head) return NULL;
        Node* temp = reverse(head);
        Node* a = temp;
        while(a != NULL){
            if(a->data == 9) a->data = 0;
            else{
                a->data += 1;
                break;
            }
            a = a->next;
        }
        head = reverse(temp);
        if(head->data == 0){
            Node* newHead = new Node(1);
            newHead->next = head;
            return newHead;
        }
        return head;
        // return head of list after adding one
    }
};