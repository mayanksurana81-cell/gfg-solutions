 /*
Category: Binary Tree, Level Order Traversal

Approach:
- Perform level order traversal using a queue.
- For every level:
  - The first node present in the queue represents the leftmost node
    visible from that level.
  - Store its value in the answer vector.
- Process all nodes of the current level and push their left and right
  children into the queue for the next level.
- Repeating this for every level generates the complete left view of the tree.

Time Complexity: O(n)
Space Complexity: O(n)
 */
/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> leftView(Node *root) {
        // code here
        queue<Node*> q;
        vector<int> ans;
        if(root == NULL) return ans;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            ans.push_back(q.front()->data);
            while(n--){
                Node* n = q.front();
                q.pop();
                if(n->left) q.push(n->left);
                if(n->right) q.push(n->right);
            }
        }
        return ans;
        
    }
};