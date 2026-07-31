class Solution {
public:
    int minimumPushes(string word) {
        vector<int> freq(26,0);
        for (char c: word){
            freq[c-'a']++;
        }
        sort(freq.begin(),freq.end(),greater<int>());//in place sorting
        int cost=0;
        for (int i=0;i<26;i++){
            if (i<8) cost+=freq[i];
            else if (i<16) cost+=(2*freq[i]);
            else if (i<24) cost+=(3*freq[i]);
            else cost+=(4*freq[i]);
        }
        return cost;
    }
};