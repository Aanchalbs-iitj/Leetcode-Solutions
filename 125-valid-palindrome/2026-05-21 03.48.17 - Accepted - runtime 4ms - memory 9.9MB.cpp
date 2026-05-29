class Solution {
public:
    bool helper(int l,int r,string &s){
        if (l>r) return true;
        if (!isalnum(s[l])) return helper(l+1,r,s);
        if (!isalnum(s[r])) return helper (l,r-1,s);
        if (tolower(s[l])!=tolower(s[r])) return false;
        return helper(l+1,r-1,s);
    }
    bool isPalindrome(string s) {
       return helper(0,s.size()-1,s);
    }
};