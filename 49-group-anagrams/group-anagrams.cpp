class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // group by frequency- it counts the frequency of each character and uses that frequency array as the key.
        unordered_map<string,vector<string>> mp;
        for (int i=0;i<strs.size();i++){
            string s=strs[i];//copy the string cause we have to push the original string later
            vector<int> freq(26,0);
            for(char c : s){// counting freq
                freq[c-'a']++;
            }
            //building key
            string key="";
            for(int i=0;i<26;i++){
                if(freq[i]>0){
                    key+=char(i+'a');
                    key+=to_string(freq[i]);
                }
            }
            mp[key].push_back(s);
        }
        vector<vector<string>> ans;
        for(auto &it:mp){ //works with & and not & too
            ans.push_back(it.second);
        }
        return ans;
    }
};