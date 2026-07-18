/*
Category: Graph, Depth-First Search (DFS), Matrix

Approach:
- Start a DFS from the given source cell and recolor it with the new color.
- Traverse only the four adjacent cells that have the same initial color as the source.
- Skip cells that are out of bounds or have already been recolored to avoid revisiting.
- Continue recursively until all connected cells with the initial color are updated.

Time Complexity: O(m × n)
Space Complexity: O(m × n)
*/
class Solution {
    int dr[4] = {-1,0,1,0};
    int dc[4] = {0,1,0,-1};
    private:
    void dfs(vector<vector<int>>& ans,vector<vector<int>>& image,int row, int col,int newColor,int iniColor){
        ans[row][col] = newColor;
        for(int k = 0; k < 4; k++){
            int nrow = row + dr[k];
            int ncol = col + dc[k];
            if(nrow >=0 && nrow < image.size() && ncol >= 0 && ncol < image[0].size()&& image[nrow][ncol] == iniColor && ans[nrow][ncol] != newColor){
                dfs(ans,image,nrow,ncol,newColor,iniColor);
            }
        }
    }
  public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,int newColor) {
        // code here
        vector<vector<int>> ans = image;
        int inicolor = image[sr][sc];
        if(image[sr][sc] == newColor) return image;
        
        dfs(ans,image,sr,sc,newColor,inicolor);
        return ans;
    }
};