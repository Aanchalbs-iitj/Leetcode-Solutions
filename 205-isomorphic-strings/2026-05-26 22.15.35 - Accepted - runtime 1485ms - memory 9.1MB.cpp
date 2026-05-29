class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.length();
        for (int i=0;i<n;i++){
            for (int j=i+1;j<n;j++){ //compare occurences style or pattern
                if (s[i]==s[j] && t[i]!=t[j]){
                    return false;
                }
                if (s[i]!=s[j] && t[i]==t[j]){
                    return false;
                }
            }
        }
        return true;
    }
};