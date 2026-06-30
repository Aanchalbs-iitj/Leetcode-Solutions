class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //brute force
        int n=s.size();
        int maxlength=0;
        for(int i=0;i<n;i++){
            vector<int> hash(256,0);
            for (int j=i;j<n;j++){
                if (hash[s[j]]==1){// we have encountered this character before and agar isko le liya toh s[i] se start hone wali aagi ki sari strings mein ye aaega so break from it
                break;
                }
            int len=j-i+1;
            maxlength=max(maxlength,len);
            hash[s[j]]=1;
            }
        }
        return maxlength;
    }
};