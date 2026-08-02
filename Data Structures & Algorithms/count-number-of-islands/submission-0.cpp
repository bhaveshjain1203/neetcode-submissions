class Solution {
    private:
    int directions[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    void dfs(int row, int col,
        vector<vector<int>>&vis, vector<vector<char>>& grid ){    
        vis[row][col]= 1;
        int n = grid.size();
        int m = grid[0].size();
        

        //top down left right
         if(row+1<n && !vis[row+1][col] && grid[row+1][col]=='1')dfs(row+1,col,vis,grid);
         if(row-1>=0 && !vis[row-1][col] && grid[row-1][col]=='1' ) dfs(row-1,col,vis,grid);
         if(col+1<m&& !vis[row][col+1] && grid[row][col+1]  =='1')dfs(row,col+1,vis,grid);
         if(col-1>=0&& !vis[row][col-1] && grid[row][col-1]=='1')dfs(row,col-1,vis,grid);

    }
public:

    

    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int cnt = 0;

        //visited array : 
        vector<vector<int>> vis (n, vector<int>(m,0));

        for(int row =0; row<n; row++){
            for (int col =0; col <m; col++){
                if(!vis[row][col] && grid[row][col]=='1'){
                    cnt ++;
                    dfs(row,col,vis,grid);
                }
            }
        }
         
         return cnt;
        
    }
};
