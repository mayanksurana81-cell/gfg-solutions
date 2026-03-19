/*
Category: Linked List (Primary), Two Pointers (Secondary)

Approach:
Use Floyd’s cycle detection to find a meeting point.
Once a cycle is detected, traverse the loop starting
from that node to count the number of nodes in the cycle.

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
    int lengthOfLoop(Node *head) {
        // code here
        Node* slow = head;
        Node* fast = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow == fast){
                int cnt = 1;
                Node*temp = slow->next;
                while(temp != slow){
                    cnt++;
                    temp = temp->next;
                }
                return cnt;
            }
        }
        return 0;
        
    }
};