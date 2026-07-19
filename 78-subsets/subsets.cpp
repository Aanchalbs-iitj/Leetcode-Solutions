class Solution {
private:
    void findSubsets(int idx,vector<int>& ds,vector<int>& arr,vector<vector<int>>& ans){
        if (idx==arr.size()){
            ans.push_back(ds);
            return;
        }
    ds.push_back(arr[idx]);
    findSubsets(idx+1,ds,arr,ans);//take
    ds.pop_back();
    findSubsets(idx+1,ds,arr,ans);//not take
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        findSubsets(0,ds,nums,ans);
        return ans;
    }
};