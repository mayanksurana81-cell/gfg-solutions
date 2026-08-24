/*
Category: Binary Tree, DFS, Recursion, Backtracking

Approach:
- Perform a DFS traversal while maintaining the current root-to-node path in a vector.
- Add each visited node to the current path.
- When a leaf node is reached, store the complete path in the answer.
- Backtrack by removing the last node before exploring the next branch.

Time Complexity: O(n × h)
Space Complexity: O(h)
*/
/* Definition for Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
  void helper(Node* root, vector<vector<int>>& ans, vector<int> v){
      v.push_back(root->data);
      if(root->left == NULL && root->right == NULL) {
        ans.push_back(v);
        return;   
      }
     if(root->left) helper(root->left, ans, v);
      v.pop_back();
     if(root->right) helper(root->right, ans, v);
  }
    vector<vector<int>> paths(Node* root) {
        // code here
        vector<vector<int>> ans;
        vector<int> v;
        helper(root, ans, v);
        return ans;
    }
};