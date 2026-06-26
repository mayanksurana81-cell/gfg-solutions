 /*
Category: Binary Tree, Level Order Traversal

Approach:
- Perform level order traversal using a queue.
- For every level:
  - The first node in the queue represents the rightmost visible node
    because right children are pushed before left children.
  - Store this node's value in the answer vector.
- Process all nodes level by level while inserting their right and left
  children into the queue.
- Repeating this for every level produces the right view of the binary tree.

Time Complexity: O(n)
Space Complexity: O(n)
 */
/*
Definition for Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> rightView(Node *root) {
        //  code here
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
                if(n->right) q.push(n->right);
                if(n->left) q.push(n->left);
            }
        }
        return ans;
        
    }
};
