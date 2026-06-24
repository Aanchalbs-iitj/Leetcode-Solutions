class Solution {
private:
    void bfs(int row,int col,vector<vector<int>>& vis,vector<vector<char>>& grid){
        queue<pair<int,int>> q;
        int m=grid.size();//no of rows
        int n=grid[0].size();//no of columns
        q.push({row,col});//vertex pushed
        vis[row][col]=1;

        while (!q.empty()){
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            //travel in the neighbours and mark them visited if thats a land
            for (int delrow=-1;delrow<=1;delrow++){
                for (int delcol=-1;delcol<=1;delcol++){
                    if (delrow==0||delcol==0){
                    int nrow=row+delrow;
                    int ncol=col+delcol;
                    if (nrow>=0 && nrow<m && ncol>=0 && ncol<n && grid[nrow][ncol]=='1'&& !vis[nrow][ncol]){
                        vis[nrow][ncol]=1;
                        q.push({nrow,ncol});
                    }
                    }
                    else continue;
                }
            }
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();//no of rows
        int n=grid[0].size();//no of columns
        vector<vector<int>> vis(m,vector<int> (n,0));//2d replica of the grid
        int cnt=0;
        for (int row=0;row<m;row++){
            for(int col=0;col<n;col++){
                if(!vis[row][col] && grid[row][col]=='1'){
                    cnt++;
                    bfs(row,col,vis,grid);
                }
            }
        }
        return cnt;
    }
};