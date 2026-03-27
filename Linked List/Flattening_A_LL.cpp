/*
Category: Linked List (Primary), Sorting (Secondary)

Approach:
Traverse all nodes using next and bottom pointers and store
values in a vector. Sort the vector, then rebuild the flattened
list using bottom pointers in sorted order.

Time Complexity: O(n log n)
Space Complexity: O(n)

Where n = total number of nodes.
*/
/*
class Node {
public:
    int data;
    Node* next;
    Node* bottom;

    Node(int x) {
        data = x;
        next = NULL;
        bottom = NULL;
    }
};
*/

class Solution {
  public:
    Node *flatten(Node *root) {
        // code here
        Node* temp = root;
        vector<int> v;
        while(temp != NULL){
            Node* t1 = temp;
                while(t1){
                    v.push_back(t1->data);
                    t1 = t1->bottom;
                }
                temp = temp->next;
        }
        sort(v.begin() , v.end());
        Node* newHead = new Node(v[0]);
        temp = newHead;
        for(int i = 1 ; i<v.size() ; i++){
            temp->bottom = new Node(v[i]);
            temp = temp->bottom;
        }
        return newHead;
    }
};