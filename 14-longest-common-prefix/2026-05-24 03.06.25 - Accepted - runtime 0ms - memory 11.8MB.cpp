class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        for (int i=0;i<strs[0].length();i++){
               for (int j=1;j<strs.size();j++){
                // length check + mismatch check
                if (i >= strs[j].length() || strs[0][i]!=strs[j][i]){
                    return ans;
                }
               }
               //push only once after all strings matched
                ans.push_back(strs[0][i]);
            }
        
        return ans;
    }
};