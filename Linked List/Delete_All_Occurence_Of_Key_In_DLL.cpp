/*
Category: Doubly Linked List (Primary)

Approach:
Traverse the list and delete nodes matching the given value.
Update both prev and next pointers carefully, handling edge
cases like deleting head or last node.

Time Complexity: O(n)
Space Complexity: O(1)

Where n = number of nodes.
*/
class Solution {
  public:
    void deleteAllOccurOfX(struct Node** head_ref, int x) {
        Node* temp = *head_ref;

        while(temp != NULL){
            if(temp->data == x){
                Node* front = temp->next;

                if(temp == *head_ref){
                    *head_ref = front;
                }

                if(temp->prev != NULL){
                    temp->prev->next = temp->next;
                }

                if(front != NULL){
                    front->prev = temp->prev;
                }

                free(temp);
                temp = front;
            }
            else{
                temp = temp->next;
            }
        }
    }
};