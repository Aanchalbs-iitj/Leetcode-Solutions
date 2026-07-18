class Solution {
private:
    void findcombination(int idx,int target,vector<int>& candidates,vector<int>& ds,vector<vector<int>>& ans){
        if (idx==candidates.size()){
            if (target==0) ans.push_back(ds);
            return;
        }
        if(candidates[idx]<=target){//take it and can take it furthur
            ds.push_back(candidates[idx]);
            findcombination(idx,target-candidates[idx],candidates,ds,ans);
            ds.pop_back();
        }
        findcombination(idx+1,target,candidates,ds,ans);   
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        findcombination(0,target,candidates,ds,ans);
        return ans;
    }
};