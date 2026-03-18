/*
Category: Doubly Linked List (Primary)

Approach:
Handle edge cases (empty list or single node).
Move head to the next node, update its prev pointer to NULL,
then delete the old head node.

Time Complexity: O(1)
Space Complexity: O(1)
*/
// User function Template for C++

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
Node *deleteHead(Node *head) {
    // Your code here
    if(head == NULL || head->next == NULL) return NULL;
    Node* temp = head;
    head = temp->next;
    head->prev = NULL;
    temp->next = NULL;
    delete temp;
    return head;
}
