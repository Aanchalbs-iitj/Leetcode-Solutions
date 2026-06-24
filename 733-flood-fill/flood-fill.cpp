class Solution {
private:
    void bfs(int row,int col,vector<vector<int>>& image, vector<vector<int>>& ans, int newColor,int initialcol){
        int m=image.size();
        int n=image[0].size();
        ans[row][col]=newColor;
        queue<pair<int,int>> q;
        q.push({row,col});
        //neighbours
        int delrow[4]={-1,0,1,0};
        int delcol[4]={0,1,0,-1};
        while(!q.empty()){
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
        for(int i=0;i<4;i++){
            int nrow=row+delrow[i];
            int ncol=col+delcol[i];
            if (nrow>=0 && nrow<m && ncol>=0 && ncol<n && image[nrow][ncol]==initialcol && ans[nrow][ncol]!=newColor){
                q.push({nrow,ncol});
                ans[nrow][ncol]=newColor;
            }
        }
        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int iniCol=image[sr][sc];
        vector<vector<int>> ans=image;//copy
        bfs(sr,sc,image,ans, color,iniCol);
        return ans;
    }
};