/*
Category: Binary Tree, DFS, Recursion

Approach:
- Recursively calculate the height of the left and right subtrees.
- The height of the current node is one more than the maximum height of its two subtrees.
- Return -1 for a NULL node, so the height is measured in terms of edges.

Time Complexity: O(n)
Space Complexity: O(h)
*/
/* Structrue of Binary Tree Node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    int height(Node* root) {
        // code here
    if(root == NULL) return -1;
    int left = height(root->left);
    int right = height(root->right);
    return 1 + max(left,right);
    }
};