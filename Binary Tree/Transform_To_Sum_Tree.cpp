/*
Category: Binary Tree, DFS, Recursion, Tree Transformation

Approach:
- Use postorder DFS so that the left and right subtree sums are calculated before updating the current node.
- Store the original value of the current node before modifying it.
- Replace the current node's value with the sum of values from its left and right subtrees.
- Return the original value plus the updated subtree sum so the parent can calculate its own subtree sum.

Time Complexity: O(n)
Space Complexity: O(h)
*/
/* Structure for Tree Node
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
  int helper(Node *root){
      if(root == NULL) return 0;
      int original_data = root->data;
      int left_tree_sum = helper(root->left);
      int right_tree_sum = helper(root->right);
      root->data = left_tree_sum + right_tree_sum;
      return original_data + root->data;
  }
    void toSumTree(Node *root) {
        // code here
        helper(root);
    }
};