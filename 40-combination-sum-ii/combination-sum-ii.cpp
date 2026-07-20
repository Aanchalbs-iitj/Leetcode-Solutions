class Solution {
private:
    void generate(int ind,int target,vector<int>& arr,vector<vector<int>>& ans,vector<int>& ds){
        //Base case
        if(target==0){
            ans.push_back(ds);
            return;
        }
        for(int i=ind;i<arr.size();i++){//for every ind we can choose from ind to n-1
            if (i>ind && arr[i]==arr[i-1]) continue; //if we have taken it before we cannot take it again cause it will become same order
            if (arr[i]> target) break;//ye wala nhi hua toh agla jo ki bada number hai kaise hoga coz vo bhi bada hi hoga obv
            ds.push_back(arr[i]);
            generate(i+1,target-arr[i],arr,ans,ds);
            ds.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> ds;
        generate(0,target,candidates,ans,ds);
        return ans;
    }
};