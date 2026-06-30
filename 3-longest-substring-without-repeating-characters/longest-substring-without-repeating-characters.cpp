class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //using sliding window and hash table
        int n=s.size();
        int l=0,r=0,maxlength=0;
        vector<int> hash(256,-1);
        while(r<n){
            if (hash[s[r]]!=-1){
                if (hash[s[r]]>=l){
                    l=hash[s[r]]+1;
                }
            }
            int len=r-l+1;
            maxlength=max(maxlength,len);
            hash[s[r]]=r;//update for furthur window
            r++;
        }
        return maxlength;
    }
};