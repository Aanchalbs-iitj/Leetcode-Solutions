class Solution {
private:
    void dfs(int row,int col,vector<vector<int>>& image, vector<vector<int>>& ans, int newColor,int initialcol){
        int m=image.size();
        int n=image[0].size();
        ans[row][col]=newColor;
        //neighbours
        int delrow[4]={-1,0,1,0};
        int delcol[4]={0,1,0,-1};
        for(int i=0;i<4;i++){
            int nrow=row+delrow[i];
            int ncol=col+delcol[i];
            if (nrow>=0 && nrow<m && ncol>=0 && ncol<n && image[nrow][ncol]==initialcol && ans[nrow][ncol]!=newColor){
                dfs(nrow,ncol,image,ans,newColor,initialcol);
            }
        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int iniCol=image[sr][sc];
        vector<vector<int>> ans=image;//copy
        dfs(sr,sc,image,ans, color,iniCol);
        return ans;
    }
};