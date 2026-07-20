class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size();//row
        int n=grid[0].size();//column
        k=k%(m*n);
        vector<vector<int>> ans(m,vector<int> (n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int oldindex=(i*n)+j;
                int newindex=(oldindex+k)% (m*n);//wrap around using modulo
                int newrow=newindex/n;
                int newcol=newindex%n;
                ans[newrow][newcol]=grid[i][j];
            }
        }
        return ans;
    }
};