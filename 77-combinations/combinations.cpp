class Solution {
private:
    void findCom(int num,int k,vector<int>& ds,vector<vector<int>>& ans, int n){
        if (num==n+1 || ds.size()==k){
            if (ds.size()==k) ans.push_back(ds);
            return;
        }
        ds.push_back(num);
        findCom(num+1,k,ds,ans,n);
        ds.pop_back();
        findCom(num+1,k,ds,ans,n);
    }
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> ds;
        findCom(1,k,ds,ans,n);
        return ans;
    }
};