class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // group by sorting
        unordered_map<string,vector<string>> mp;
        for (int i=0;i<strs.size();i++){
            string s=strs[i];//copy the string cause we have to push the original string later
            sort(s.begin(),s.end());//sort it
            mp[s].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for(auto &it:mp){ //works with & and not & too
            ans.push_back(it.second);
        }
        return ans;
    }
};