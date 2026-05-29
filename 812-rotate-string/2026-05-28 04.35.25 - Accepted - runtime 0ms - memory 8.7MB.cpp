class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.size()!=goal.size()) return false;
        int n=s.size();
        for (int shift=0;shift<n;shift++){
            string rotated(n, ' ');//5 spaces string
            for (int i=0;i<n;i++){
                if (i<shift){
                rotated[n-shift+i]=s[i];
                }
                else {
                    rotated[i-shift]=s[i];
                }
            }
            if (rotated == goal) return true;
        }
        return false;
    }
};