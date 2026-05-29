class Solution {
public:
    string frequencySort(string s) {
        string ans="";
        unordered_map<char,int> mp;
        for (char ch:s){
            mp[ch]++;
        }
        vector<pair<int,char>> v;
        for (auto it : mp){
            v.push_back({it.second,it.first});
        }
        sort(v.rbegin(),v.rend());
        for (auto it : v){
            for(int i=0;i<it.first;i++){
                ans+=it.second;
            }
        }
        return ans;
    }
};