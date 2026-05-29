class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        int n=strs.size();
        sort(strs.begin(),strs.end());
        //compare strs[0] and strs[n-1]
        for (int i=0;i<strs[0].size();i++){
            if(i >= strs[n-1].size() || strs[0][i]!=strs[n-1][i]) break;
            ans.push_back(strs[0][i]);
        }
        return ans;
    }
};