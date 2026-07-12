class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int > sorted=arr;
        unordered_map<int,int> mp;
        sort(sorted.begin(),sorted.end());
        for (int i=0;i<sorted.size();i++){
            if (mp.find(sorted[i])==mp.end()){
                mp[sorted[i]]=mp.size()+1;
            }
        }
        // vector<int> ans;
        for(int i=0;i<arr.size();i++) {
            arr[i]=mp[arr[i]];
        }
        return arr;
    }
};