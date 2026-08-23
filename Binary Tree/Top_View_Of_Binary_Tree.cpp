/*
Category: Binary Tree, BFS, Queue, Map

Approach:
- Perform a level-order traversal using BFS while storing each node along with its horizontal distance from the root.
- Use a map to store the first node encountered at each horizontal distance.
- Since BFS processes nodes level by level, the first node recorded for each horizontal distance is the node visible from the top.
- Traverse the map in sorted horizontal-distance order to construct the top view.

Time Complexity: O(n log n)
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
    vector<int> topView(Node *root) {
        // code here
        queue<pair<Node*, int>> q;
        map<int,int> mp;
        q.push({root,0});
        while(!q.empty()){
            Node* curr = q.front().first;
            int curr_HD = q.front().second;
            if(mp.find(curr_HD) == mp.end()){
                mp[curr_HD] = curr->data;
            }
            q.pop();
            if(curr->left) q.push({curr->left , curr_HD-1});
            if(curr->right) q.push({curr->right, curr_HD+1});
        }
        vector<int> ans;
        for(auto x : mp){
            ans.push_back(x.second);
        }
        return ans;
    }
};