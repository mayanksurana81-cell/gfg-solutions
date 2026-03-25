/*
Category: Doubly Linked List (Primary)

Approach:
Traverse the sorted doubly linked list and remove duplicate nodes
by comparing with previous node and updating pointers accordingly.

Time Complexity: O(n)
Space Complexity: O(1)

Where n = number of nodes.
*/
/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }

};
*/

class Solution {
  public:
    Node* removeTail(struct Node *head , Node*temp){
        Node* back = temp->prev;
        back->next = NULL;
        temp->prev = NULL;
        free(temp);
        temp = back;
        return head;
    }
    Node* removeNode(struct Node *head , Node* temp){
        if(temp->next == NULL) return removeTail(head , temp);
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            temp->next = NULL;
            temp->prev = NULL;
            free(temp);
        return head;
    }
    Node *removeDuplicates(struct Node *head) {
        // Your code here
        if(head == NULL || head->next == NULL) return head;
        Node* temp = head;
        temp = temp->next;
        while(temp != NULL){
            if(temp->data == temp->prev->data){
                Node* nextnode = temp->next;
                head = removeNode(head , temp);
                temp = nextnode;
            }
            else temp = temp->next;
        }
        return head;
    }
};