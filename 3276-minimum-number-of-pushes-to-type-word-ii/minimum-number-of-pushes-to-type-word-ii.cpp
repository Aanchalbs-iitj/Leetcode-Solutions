class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int> mpp;
        for(auto it: word){
            mpp[it]++;
        }
        //copy the values into another vector now and sort in decreasing order
        vector<int> freq;
        for(auto it: mpp){
            freq.push_back(it.second);
        }
        sort(freq.begin(),freq.end(),greater<int>());//in place sorting
        int cost=0;
        for (int i=0;i<freq.size();i++){
            if (i<8) cost+=freq[i];
            else if (i<16) cost+=(2*freq[i]);
            else if (i<24) cost+=(3*freq[i]);
            else cost+=(4*freq[i]);
        }
        return cost;
    }
};