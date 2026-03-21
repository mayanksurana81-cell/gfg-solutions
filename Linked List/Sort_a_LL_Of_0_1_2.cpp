/*
Category: Linked List (Primary)

Approach:
Create three separate lists for nodes with values 0, 1, and 2.
Traverse the original list and attach nodes to respective lists.
Finally, connect the three lists to form the sorted linked list.

Time Complexity: O(n)
Space Complexity: O(1)

Where n = number of nodes.
*/
/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        Node* list0 = new Node(-1);
        Node* list1 = new Node(-1);
        Node* list2 = new Node(-1);
        
        Node* temp0 = list0;
        Node* temp1 = list1;
        Node* temp2 = list2;
        
        Node* temp = head;
        while(temp!= NULL){
            if(temp->data == 0){
                temp0 ->next = temp;
                temp0 = temp;
                temp = temp->next;
                temp0 ->next  = NULL;
            }
            else if(temp->data == 1){
                temp1 ->next = temp;
                temp1 = temp;
                temp = temp->next;
                temp1 ->next  = NULL;
            }
            else{
                temp2 ->next = temp;
                temp2 = temp;
                temp = temp->next;
                temp2 ->next  = NULL;
            }
        }
        temp0 ->next = (list1->next) ? list1->next : list2->next;
        temp1->next = list2->next;
        return list0->next;
    }
};